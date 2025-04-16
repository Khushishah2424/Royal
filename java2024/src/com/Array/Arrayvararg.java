package com.Array;

public class Arrayvararg {
	
	public void test(int a,int b) {
		System.out.println(a + " "+b);
	}
	
	public void test2(int x,int ...a) {
		System.out.println("x..."+x);
		for(int s:a) {
			System.out.println(s);
		}
	}
	
	public static void main(String[] args) {
		Arrayvararg a = new Arrayvararg();
		a.test(10, 20);
		a.test2(1,2,3,5);
	}
}
