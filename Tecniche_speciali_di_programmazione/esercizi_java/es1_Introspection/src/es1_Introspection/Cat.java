package es1_Introspection;

public class Cat {
	
	
	private String name;
	private int age;
	
	public Cat(String name, int age) {
		this.name = name;
		this.age = age;
	}
	
	public static void meow() {
		System.out.println("Meoooow!");
	}
	
	public int getAge() {
		int i = this.age;
		return i;
	}
	
	public String getName() {
		String name = this.name;
		return name;
	}
	
	private void incrementAge() {
		this.age += 1;
	}
	
	public void setName(String nam, float f) {
		this.name = nam;
	}
	
	public void setAge(int j) {
		for(int i = 0; i< j; i++) {
			incrementAge();
		}
	}
	
	
}
