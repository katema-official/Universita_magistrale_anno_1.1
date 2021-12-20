package es5_ControlFlowGraph;

import es5_ControlFlowGraph.PublicAnnotations.CLASSES;
import es5_ControlFlowGraph.PublicAnnotations.METHODS;

public class Class2 {

	public int b;
	public Class1 cls1;
	
	public Class2(int b) {
		this.b = b;
	}
	
	@CLASSES()
	@METHODS()
	public void setOtherClass(Class1 cls) {
		this.cls1 = cls;
	}
	
	@CLASSES(classes = {"es5_ControlFlowGraph.Class1"})
	@METHODS(methods = {"Method12"})
	public void Method21(){
		cls1.Method12();
	}
	
	
}
