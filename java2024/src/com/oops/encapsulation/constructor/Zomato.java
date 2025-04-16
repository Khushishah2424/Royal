package com.oops.encapsulation.constructor;


class Swiggy{
	int x =10;
	public Swiggy(){
		 System.out.println("Default constructor of Swiggy");
	}
	public Swiggy(int fund) {
		System.out.println("Parameterized construtor of Swiggy");
		System.out.println("Fund ="+fund);
	}
}


public class Zomato extends Swiggy{
	  public Zomato(){
		  super(100);
		  System.out.println(x);
		  System.out.println("Default constructor of Zoamto");
      }
	  

	  
	  public static void main(String arg[]) {
		  Zomato z = new Zomato();
//		  Swiggy s = new Swiggy(100);	
		  
	  }
}


