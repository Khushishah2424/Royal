package com.method_var;

public class vardemo2 {
	int balance;
	static int intRate;
	
	public static void main(String arg[]) {
		vardemo2 v1 = new vardemo2();
		vardemo2 v2 = new vardemo2();
		vardemo2 v3 = new vardemo2();
		
		v1.balance = 1000;
		v2.balance = 1400;
		v3.balance = 3000;
		
		System.out.println(v1.balance);
		
		intRate = 10;
		intRate = 20;
		System.out.println(intRate);
	}
}
