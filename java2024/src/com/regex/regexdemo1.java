package com.regex;

import java.util.regex.Pattern;
import java.util.regex.Matcher;


public class regexdemo1 {
	public static void main(String[] args) {
//		Pattern pattern = Pattern.compile(".s");
//		Matcher m = pattern.matcher("+s");
		
//		Pattern pattern = Pattern.compile("..s");
//		Matcher m = pattern.matcher("+ss");
//		
//		Pattern pattern = Pattern.compile("[abc]");//a,b,c
//		Matcher m = pattern.matcher("a");
		
//		Pattern pattern = Pattern.compile("[a-z]"); //a,b,c
//		Matcher m = pattern.matcher("z");
		
//		Pattern pattern = Pattern.compile("[a-zA-Z]"); 
//		Matcher m = pattern.matcher("Z");
		
//		Pattern pattern = Pattern.compile(".[a-zA-Z0-9_]"); 
//		Matcher m = pattern.matcher("a_");
		
		Pattern pattern = Pattern.compile("[^a-z][A-Z]"); // a-z no
		Matcher m = pattern.matcher("PP");
		
		System.out.println(m.matches());
	}
}
