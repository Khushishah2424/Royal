package com.rev;

abstract class Gparent{
	public abstract void loan();
	
}
abstract class parent extends Gparent{
	//parent can override loan method but if he does not then child must have to override
	
}


public class Abstractdemo2 extends parent{
	public static void main(String[] args) {
		Gparent gp = new Abstractdemo2();
		parent p = new Abstractdemo2();
		gp.loan();
		p.loan();
	}

	public void loan() {
		System.out.println("loan...");
		
	}

	
}
