package com.date;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;


public class StringtoDate {
	public static void main(String[] args) {
		
		String strDate = "2024-02-14";
		SimpleDateFormat df = new SimpleDateFormat("yyyy-MM-dd");
		try {
			Date date = df.parse(strDate);
			System.out.println(date);
		}
		catch(ParseException p) {
			p.printStackTrace();
		}
		
	}
}	
