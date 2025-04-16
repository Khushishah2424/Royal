package com.oops.abstraction;

abstract class Animal{
	public abstract void sound();
	
	public void sleep() {
		System.out.println("Animal is Slpeeping");
	}
}

class dog extends Animal{
	public void sound() {
		System.out.println("Barking");
	}
}

class cat extends Animal{
	public void sound() {
		System.out.println("Meow!!");
	}
	
}
public class Abstractiondemo3 {
	public static void main(String[] args) {
		dog d = new dog();
		d.sound();
		d.sleep();
	}
	 
}
