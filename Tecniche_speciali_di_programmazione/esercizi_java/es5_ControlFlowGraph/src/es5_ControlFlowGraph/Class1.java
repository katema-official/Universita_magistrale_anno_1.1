package es5_ControlFlowGraph;

import es5_ControlFlowGraph.PublicAnnotations.CLASSES;
import es5_ControlFlowGraph.PublicAnnotations.METHODS;

public class Class1 {

	public int a;
	public Class2 cls2;
	
	public Class1(int a) {
		this.a = a;
	}
	
	@CLASSES()
	@METHODS()
	public void setOtherClass(Class2 cls) {
		this.cls2 = cls;
	}
	
	@CLASSES(classes = {"es5_ControlFlowGraph.Class2"})
	@METHODS(methods = {"Method21"})
	public void Method11() {
		cls2.Method21();
	}
	
	@CLASSES()
	@METHODS()
	public void Method12() {
		System.out.println("Mi hai trovato!");
	}
	
	
	
}
