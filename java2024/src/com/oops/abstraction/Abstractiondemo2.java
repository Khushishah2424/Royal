package com.oops.abstraction;

public class Abstractiondemo2 extends Abstractiondemo1{
	public void phone() {
		System.out.println("phone method of abstract demo");
		
	}

	public static void main(String[] args) {
		Abstractiondemo2 abs = new Abstractiondemo2();
		abs.phone();
		abs.nonabs();
	}
}
