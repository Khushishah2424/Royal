package com.oops.Interface;

interface Run{
	void runnable();
}

public class Running implements Run{

	public void test() {
		System.out.println("test...");
	}

	public void runnable() {
		System.out.println("Run method called....");
	}
	
	public static void main(String arg[]) {
		Run r = new Running();
		r.runnable();
//		r.test();
		
		
		Running r1 = new Running();
		r1.test();
		r1.runnable();
	}
}
