package es1_Introspection;
import java.lang.Class;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;

public class DumpMethodsMain {

	public static void main(String[] args) {
		
		//devo sapere il nome della classe di cui voglio conoscere i metodi
		String className = "es1_Introspection." + args[0];
		System.out.println(className);
		try {
			Class class_object = Class.forName(className);
			
			//ora devo prendere tutti i metodi pubblici della classe
			Method[] methods = class_object.getMethods();
			
			//stampo i nomi di tutti i metodi
			for(Method m : methods) {
				if(m.getDeclaringClass().getName().equals(className)) {
					
					//diciamo di voler stampare solo i metodi di istanza, quindi quelli statici non valgono
					int modif = m.getModifiers();
					if(!Modifier.isStatic(modif)) {
						String s = "Class " + className + " has a method " + m.getReturnType().getName() + " " + m.getName() + "(";
						Class[] parameters = m.getParameterTypes();
						for(Class c: parameters) {
							s += c.getName() + ", ";
						}
						s += ")";
						System.out.println(s);
						
						//System.out.println("Class " + className + " has a method " + m.getReturnType().getName() + " " + m.getName() + "(" + m.getParameterTypes() + ")");
				
					}
				}
			}
			
			
		} catch (ClassNotFoundException e) {
			System.out.println("Classe non trovata");
		}
		
		
	}

}
