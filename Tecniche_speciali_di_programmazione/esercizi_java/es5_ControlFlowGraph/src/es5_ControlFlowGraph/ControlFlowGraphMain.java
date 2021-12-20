package es5_ControlFlowGraph;

import java.lang.reflect.Method;
import java.util.LinkedList;

import es5_ControlFlowGraph.PublicAnnotations.METHODS;
import es5_ControlFlowGraph.PublicAnnotations.CLASSES;

public class ControlFlowGraphMain {

	public static void main(String[] args) {
		boolean static_analysis = true;
		
		if(static_analysis) {
			//prendo i nomi delle classi che devo tenere in considerazione
			LinkedList<Class> classes = new LinkedList<Class>();
			for(String cls_name : args) {
				try {
					classes.add(Class.forName(cls_name));
				} catch (ClassNotFoundException e) {
					e.printStackTrace();
				}
			}
			
			//prendo una classe alla volta
			for(Class cls : classes) {
				
				//prendo i suoi metodi
				Method[] methods = cls.getDeclaredMethods();
				for(Method m : methods) {
					//prendo i valori delle annotazioni, ovvero delle classi e i rispettivi metodi
					CLASSES annot_classes = m.getAnnotation(CLASSES.class);
					for(String s : annot_classes.classes()) {
						System.out.println(s);
					}
					METHODS annot_methods = m.getAnnotation(METHODS.class);
					for(String s : annot_methods.methods()) {
						System.out.println(s);
					}
					
				}
				
			}
			
			
			
		}

	}

}
