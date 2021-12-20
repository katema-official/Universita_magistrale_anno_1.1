package es3_TestingFields;

import java.lang.reflect.Field;
import java.lang.reflect.Modifier;

public class TestingFieldsMain {

	public static void main(String[] args) {
		Class cls_testing_fields = TestingFields.class;
		Field[] fields_testing_fields = cls_testing_fields.getDeclaredFields();
		TestingFields tf = new TestingFields(7, 3.14);
		printFields(fields_testing_fields, tf);
		
		Field f;
		try {
			f = cls_testing_fields.getDeclaredField("s");
			if(f.isAccessible() == false) {
				f.setAccessible(true);
			}
			f.set(tf, "... passed!!! ok that was cringe");
		} catch (NoSuchFieldException | SecurityException | IllegalArgumentException | IllegalAccessException e1) {
			e1.printStackTrace();
		}
		print("----------------------------------");
		printFields(fields_testing_fields, tf);
	}
	
	public static void printFields(Field[] fields, Object obj) {
		for(Field f : fields) {
			String s = "";
			int modifiers = f.getModifiers();
			if(Modifier.isPublic(modifiers)) {
				s += "public";
			}else if(Modifier.isPrivate(modifiers)) {
				s += "private";
			}else if(Modifier.isProtected(modifiers)) {
				s += "protected";
			}
			
			if(Modifier.isStatic(modifiers)) {
				s += " static";
			}
			
			if(Modifier.isFinal(modifiers)) {
				s += " final";
			}
			
			Class type = f.getType();
			if (type.isArray()){
				Class component = type.getComponentType();
				s += " " + component.getName() + "[]";
			}else {
				s += " " + type.getName();
			}
			
			s += " " + f.getName() + " = ";
			
			if(!f.isAccessible()) {
				f.setAccessible(true);
			}
			try {
				if (type.isArray()){
					Class component = type.getComponentType();
					Object[] arr = (Object[]) f.get(obj);
					String ss = fromArrayToString(arr);
					s += ss;
				}else {
				
					s += f.get(obj);
				}
			} catch (IllegalArgumentException | IllegalAccessException e) {
				e.printStackTrace();
			}
			print(s);
			
		}
	}
	
	public static String fromArrayToString(Object[] array) {
		String res = "[";
		for(int i = 0; i<array.length; i++) {
			res += array[i] + ", ";
		}
		res = res.substring(0, res.length()-2);
		res += "]";
		return res;
		
	}

	public static void print(String s) {
		System.out.println(s);
	}
	
}
