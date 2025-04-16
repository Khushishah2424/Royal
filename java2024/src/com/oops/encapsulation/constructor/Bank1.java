 package com.oops.encapsulation.constructor;

public class Bank1 {
	int Amount;
	public Bank1() {
		System.out.println("Default Constructor");
	}
	
	public Bank1(int Amount) {
		System.out.println("Parameterized con");
		this.Amount  = Amount;
		//System.out.println("Anmount"+Amount);
		
	}
     public void getAmount() {
		
		System.out.println("Amount  = "+Amount);
	}
	
	public static void main (String arg[]) {
			Bank1 b = new Bank1();
			Bank1 b1 = new Bank1(10);
			b1.getAmount();
			
	}
}
