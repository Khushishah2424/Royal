package com.oops.Interface;


interface Messagable{
	void msg();
}

interface Textable{
	void text();
}

public class Mesaage implements Messagable,Textable {
	public void msg() {
		System.out.println("Messagable call");
	}
	public void text() {
		System.out.println("TExt...");
	}
	public static void main(String[] args) {
//		Messagable m = new Mesaage();
//		m.msg();
		Mesaage m  = new Mesaage();
		m.msg();
		m.text();
		
		
		
	}
}
