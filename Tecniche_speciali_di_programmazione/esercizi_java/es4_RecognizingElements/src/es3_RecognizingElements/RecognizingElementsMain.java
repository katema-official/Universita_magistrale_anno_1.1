package es3_RecognizingElements;

import java.lang.reflect.Field;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Arrays;
import java.util.LinkedList;

public class RecognizingElementsMain {

	public static void main(String[] args) {
		String[] classNames = {"es3_RecognizingElements.Cat", "es3_RecognizingElements.Dog"};
		String[] classElements = {"doubleName", "age", "bark", "name", "meow", "setAgeAndReturnIt", "Pippo", "addAge", "isOld"};
		
		for(String method_or_field : classElements) {
			boolean foundDeclaringClass = false;
			for(String class_name : classNames) {
				Class cls;
				try {
					
					//prendo il class object
					cls = Class.forName(class_name);
					LinkedList<Member> members_of_cls = new LinkedList<Member>();
					
					//considero i field di quella classe
					members_of_cls.addAll(Arrays.asList(cls.getDeclaredFields()));
					
					//ne prendo i nomi
					LinkedList<String> members_of_cls_names = new LinkedList<String>();
					for(Member mem : members_of_cls) {
						members_of_cls_names.add(mem.getName());
					}
					
					//vedo se la classe corrente ha un field col nome corrente
					if (members_of_cls_names.contains(method_or_field)) {
						printInfo(cls, method_or_field, false);
						foundDeclaringClass = true;
					}else {
						
						//controllo allora se il nome è di un metodo della classe
						members_of_cls.clear();
						members_of_cls.addAll(Arrays.asList(cls.getDeclaredMethods()));
						
						members_of_cls_names.clear();
						for(Member mem : members_of_cls) {
							members_of_cls_names.add(mem.getName());
						}
						
						if (members_of_cls_names.contains(method_or_field)) {
							printInfo(cls, method_or_field, true);
							foundDeclaringClass = true;
						}
						
					}		
					
					
				} catch (ClassNotFoundException e) {
					e.printStackTrace();
				}
				
					
			}
			
			//se il Member non era dichiarato da nessuna classea
			if(foundDeclaringClass == false) {
				System.out.println("The attribute " + method_or_field + " doesn't belong to any of the given classes");
			}
		}

	}
	
	public static void printInfo(Class cls, String name, boolean isMethod) {

		String res = "";
		
		//se è un field
		if(!isMethod) {
			try {
				Field f = cls.getDeclaredField(name);
				res = "Class " + cls.getName() + " has attribute: ";
				int mod = f.getModifiers();
				if(Modifier.isPublic(mod)) {
					res += "public ";
				}else if(Modifier.isProtected(mod)) {
					res += "protected ";
				}else if(Modifier.isPrivate(mod)) {
					res += "private ";
				}
				
				if(Modifier.isStatic(mod)) {
					res += "static ";
				}
				
				if(Modifier.isFinal(mod)) {
					res += "final ";
				}
				res += f.getType().getName() + " ";
				res += f.getName();
				
			} catch (NoSuchFieldException | SecurityException e) {
				e.printStackTrace();
			}
		}else {
			//se è un metodo
			Method[] ms = cls.getDeclaredMethods();
			Method cm = null;
			for(Method m : ms) {
				if(m.getName().equals(name)) {
					cm = m;
					break;
				}
			}
			
			res = "Class " + cls.getName() + " has method: ";
			int mod = cm.getModifiers();
			
			if(Modifier.isPublic(mod)) {
				res += "public ";
			}else if(Modifier.isProtected(mod)) {
				res += "protected ";
			}else if(Modifier.isPrivate(mod)) {
				res += "private ";
			}
			
			if(Modifier.isStatic(mod)) {
				res += "static ";
			}
			
			if(Modifier.isFinal(mod)) {
				res += "final ";
			}
			
			res += cm.getReturnType().getName() + " ";
			
			res += name + "(";
			
			Class[] params = cm.getParameterTypes();
			
			if(params.length > 0) {
				for(int j=0; j<params.length; j++) {
					res += params[j].getName() + ", ";
				}
				res = res.substring(0, res.length() - 2);
			}
			
			res += ")";
			
			
		}
		
		System.out.println(res);
		
	}

}
