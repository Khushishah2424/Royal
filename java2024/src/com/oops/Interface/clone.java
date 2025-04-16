package com.oops.Interface;

interface Clonable{
	
	
	//all instance variable are public final static
	//public final static integer x =10;
	int x = 10;
	
	//public abstract void cloud();
	void cloud();
}

public class clone implements Clonable {
	public static void main(String[] args) {
		System.out.println(x);
		clone c = new clone();
		c.cloud();
		c.Cloud2();
	}
	public void cloud() {
		System.out.println("Abstract Method");
	}
	public void Cloud2() {
		System.out.println("Non-Abstract Method");
	}
}


