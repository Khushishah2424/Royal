package com.Enum;

enum Color{
	RED,BLUE,GREEN;
}

public class Enumdemo {
	
	enum Days{
		MONDAY,
		TUESDAY,
		WENDESDAY,
		THURSDAY,
		FRIDAY,
		SATURDAY,
		SUNDAY
	}
	
	public static void main(String[] args) {
		Color c1 = Color.Red;
		System.out.println(c1);
		System.out.println(Color.Blue);
//		System.out.println(Days.Friday);
		for(Days d:Days.values()) {
			System.out.println(d);
		}
		
		
	}
}
