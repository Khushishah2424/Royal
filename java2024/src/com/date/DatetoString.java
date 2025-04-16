package com.date;

import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;


public class DatetoString {
	public static void main(String[] args) {
		Date date = new Date();
		System.out.println(date);
		
		DateFormat df = new SimpleDateFormat("yyyy-MMM-dd HH:mm:ss a zzzz w EEEE");
		String strDate = df.format(date);
		System.out.println(strDate);
		
	}
}
