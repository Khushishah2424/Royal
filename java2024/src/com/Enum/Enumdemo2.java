package com.Enum;

public class Enumdemo2 {
	enum calc{
		ADD,SUB,DIV,MUL;
	}
	
	public void Calculator(int a,int b,calc c) {
		int ans = 0;
		switch(c) {
		case ADD:
			ans = a+b;
			break;
		case SUB:
			ans = a-b;
		default:
			ans = 0;
			System.out.println("Invalid Choice");
			
		}
		System.out.println(ans);
	}
	public static void main(String[] args) {
		Enumdemo2 e = new Enumdemo2();
		e.Calculator(10, 20, calc.ADD);
	}
}
