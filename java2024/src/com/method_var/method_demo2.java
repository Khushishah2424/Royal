package com.method_var;

public class method_demo2 {
	
	public void test() {
		System.out.println("test");
	}
	
	public static int sum(int a , int b) {
		
			method_demo2  m1= new method_demo2();
			m1.test();
			return a+b;
	}
	

	
	
	public static void main(String arg[]) {
		int ans = sum(100,200);
		System.out.println("ans = "+ans);
	}
}
