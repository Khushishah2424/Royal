package com.rev;

interface clonable{
	public void clonning();
}

public class Interfacedemo1 implements clonable{
	public static void main(String[] args) {
		clonable c = new Interfacedemo1();
		c.clonning();
	}

	@Override
	public void clonning() {
		// TODO Auto-generated method stub
		
	}
}
