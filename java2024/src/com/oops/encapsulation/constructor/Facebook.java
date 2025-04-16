package com.oops.encapsulation.constructor;

class meta{
	public meta(float f,int a) {
		System.out.println("Meta parameterized");
		System.out.println("ans ="+f+a);
	}
}

public class Facebook extends meta {
	public Facebook(){
		super(100.0f,10);
//		System.out.println("DeFault");
	}
	public Facebook(int y) {
		super(90.0f,10);
	}

	public static void main(String arg[]) {
		Facebook  f = new Facebook(100);
		
	}
}
