package es6_Proxy;

import java.lang.reflect.Proxy;

public class ProxyMain {

	public static void main(String[] args) {
		TestingFields instance = new TestingFields(7, 3.14);
		TestingFieldsInterface proxy = (TestingFieldsInterface) TestingFieldsInvocationHandler.createProxy(instance);
		proxy.setAnswer(6);
		
		System.out.println("The ANSWER is: " + proxy.getAnswer());

	}

}
