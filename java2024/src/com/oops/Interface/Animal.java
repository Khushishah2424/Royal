package com.oops.Interface;

interface Dog{
	 void bark();
}

interface Cat{
	void Meow();
}


public class Animal implements Dog,Cat{
	
	
	public void food() {
		System.out.println("Food....");
	}

	@Override
	public void Meow() {
		// TODO Auto-generated method stub
		System.out.println("Meow.......");
		
	}

	@Override
	public void bark() {
		// TODO Auto-generated method stub
		System.out.println("Barking....");
		
	}
	
	public static void main(String arg[]) {
		Dog d = new Animal();
		d.bark();
		
		Cat c = new Animal();
		c.Meow();
		
		Animal a = new Animal();
		a.food();
	}
	
}
