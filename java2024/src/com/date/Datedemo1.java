package com.date;

import java.util.Date;
public class Datedemo1 {
	public static void main(String[] args) {
		Date date = new Date();
		System.out.println(date);
		System.out.println(date.getDate());
		System.out.println(date.getMonth());
		System.out.println(date.getDay());
		System.out.println(date.getHours());
		System.out.println(date.getMinutes());
		System.out.println(date.getSeconds());
		System.out.println(date.getTime());
		long mils = date.getTime();
		System.out.println(mils);
		
		
		Date date2 = new Date(mils);
		System.out.println("Mills to date =  "+date2);




		
	}
}
