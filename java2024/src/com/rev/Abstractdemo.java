package com.rev;

abstract class water {
	public abstract void watermaker();
	public void bottle() {
		System.out.println("Non-abstract method");
	}
}

public class Abstractdemo  extends water {
	public void watermaker() {
		System.out.println("Abstract methods");
	}
	
	public void test() {
		System.out.println("test....");
	}
	public static void main(String[] args) {
		//polymorphic object
		water w = new  Abstractdemo();
		w.watermaker();
		w.bottle();
		Abstractdemo a = new  Abstractdemo ();
		a.bottle();
		a.test();
	
		
		
	}
}
