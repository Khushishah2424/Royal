package com.oops.poly.overloading;

public class Overloadingdemo2 {
	public void std() {
		System.out.println("About Student");
	}
	public void std(int id) {
		System.out.println("ID = "+id);
	}
	public void std(int id,String name) {
		System.out.println("About Student");
		System.out.println("ID = "+id);
		System.out.println("Name = "+name);
	}
	
	public static void main(String arg[]) {
		Overloadingdemo2 ol = new Overloadingdemo2();
		ol.std(1,"Khushi");
	}
}
