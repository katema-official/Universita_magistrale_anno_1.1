package es3_RecognizingElements;

public class Cat {

	private int age;
	public String name;
	
	private String meow() {
		return "meow";
	}
	
	public int addAge(int a) {
		this.age += a;
		return this.age;
	}
	
	protected boolean isOld(int j) {
		if(this.age == j){
			return true;
		}
		return false;
	}
	
}
