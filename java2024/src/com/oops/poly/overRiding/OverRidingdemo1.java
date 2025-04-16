package com.oops.poly.overRiding;


class TRAI{
	public void call() {
		System.out.println("call method of Trai class...");
	}
	void task() {
		System.out.println("task of TRAI..");
	}
	
	protected void task2() {
		System.out.println("task 2 of TRAI");
	}
	
	public int reach() {
		return 100;
	}
	
	public final void greet() {
		System.out.println("final method.... of TRAI");
	}
	
	public static void map() {
		System.out.println("map of TRAI");
	}
	
}

class JIO extends TRAI{
	public void call() {
		System.out.println("call method of jio class...");
	}
	
	public void task(){
		System.out.println("task of JIO");
	}
	
	public void task2() {
		System.out.println("task 2 of jio");
	}
	
	public int reach() {
		return 100;
	}
	
//	public final void greet() {
//		System.out.println("final method.... of TRAI");
//	}
	
	public static void map() {
		System.out.println("jio map");
	}
	
}
public class OverRidingdemo1 {
	public static void main(String[] args) {
		JIO j = new JIO();
		j.task();

	}
}
