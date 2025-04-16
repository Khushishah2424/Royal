package com.method_var;

public class method_demo1 {
	public void test() {
		System.out.println("Test method call");
	}
	
	public int sum(int a , int b) {
		return a+b;
	}
	
	public boolean isvalid(){
		return false;
	}
	
	public static void main(String arg[]) {
		method_demo1 M1 = new method_demo1();
		M1.test();
		
		int ans = M1.sum(100, 20);
		System.out.println(ans);
		
		boolean ans1 = M1.isvalid();
		System.out.println("Ans1 = "+ans1);
		
	}
}
