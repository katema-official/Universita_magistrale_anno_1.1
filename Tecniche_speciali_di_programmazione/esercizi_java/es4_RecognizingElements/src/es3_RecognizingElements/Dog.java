package es3_RecognizingElements;

public class Dog {

	protected float age;
	public String name;
	
	protected static void bark() {
		System.out.println("bark");
	}
	
	public float setAgeAndReturnIt(float new_age) {
		this.age = new_age;
		return this.age;
	}
	
	private final String doubleName() {
		return this.name + " " + this.name;
	}
	
}
