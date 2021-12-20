package es6_Proxy;

import java.lang.reflect.Field;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

public class TestingFieldsInvocationHandler implements InvocationHandler{

	public static Proxy createProxy(Object target) {
		return (Proxy) Proxy.newProxyInstance(target.getClass().getClassLoader(), 
				target.getClass().getInterfaces(), 
				new TestingFieldsInvocationHandler(target));
	}
	
	private Object target;
	
	public TestingFieldsInvocationHandler(Object target) {
		this.target = target;
	}
	
	
	@Override
	public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
		printState();
		Object ret = method.invoke(target, args);
		printState();
		return ret;
	}
	
	
	
	private void printState() {
		Field[] fields = target.getClass().getDeclaredFields();
		for(Field f : fields) {
			
			if(f.isAccessible() == false) {
				f.setAccessible(true);
			}
			
			//se è un array
			if(f.getType().isArray()) {
				Object[] arr;
				try {
					arr = (Object[]) f.get(target);
					String res = "Field " + f.getName() + " has value [";
					for(int i=0; i<arr.length; i++) {
						res += arr[i] + ", ";
					}
					res = res.substring(0, res.length() - 2);
					res += "]";
					System.out.println(res);
				} catch (IllegalArgumentException | IllegalAccessException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
				
			}else {
				
				//se non è un array
				
				try {
					String res = "Field " + f.getName() + " has value " + f.get(target);
					System.out.println(res);
				} catch (IllegalArgumentException | IllegalAccessException e) {
					e.printStackTrace();
				}
				
			}
		}
	}
	
	
	
	
	
	
}
