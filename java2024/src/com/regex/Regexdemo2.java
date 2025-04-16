package com.regex;

import java.util.regex.Pattern;
import java.util.regex.Matcher;


public class Regexdemo2 {
	public static void main(String[] args) {
//		Pattern pattern = Pattern.compile(".+");//empty - flase
//		Pattern pattern = Pattern.compile("[abc]+");
//		Pattern pattern = Pattern.compile("[a-zA-Z]+"); //one or more
//		Pattern pattern = Pattern.compile("[a-zA-Z]*"); //zero or more
//		Pattern pattern = Pattern.compile("[a-zA-Z]?");//zero and one
//		Pattern pattern = Pattern.compile("[a-zA-Z]{0,3}");//range between 0 and 3
		Pattern pattern = Pattern.compile("[6-9]{1}[0-9]{3}");//9 numbers should be there
		Matcher m = pattern.matcher("8990");
		System.out.println(m.matches());
		
	}
}
