package com.regex;

import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Qauntitiers {
	public static void main(String[] args) {
//		Pattern pattern = Pattern.compile("\\d"); // [0-9]only digts
//		Pattern pattern = Pattern.compile("\\D"); // [^0-9]
//		Pattern pattern = Pattern.compile("\\w"); // [a-zA-Z0-9_]
//		Pattern pattern = Pattern.compile("\\W");// any non word char
//		Pattern pattern = Pattern.compile("\\s"); //any white space char
		Pattern pattern = Pattern.compile("\\S");//no white space char
		Matcher m = pattern.matcher("a");
		System.out.println(m.matches());
	}
}
