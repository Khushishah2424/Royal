package com.regex;

import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Regexdemo3 {
	public static void main(String[] args) {
//		Pattern pattern = Pattern.compile("^hello(\\s){1}(\\w)+");
//		Pattern pattern = Pattern.compile("(\\w)*world$");
//		Pattern pattern = Pattern.compile("^hello(\\s){1}world$");
		Pattern pattern = Pattern.compile("(\\w){1,8}.com$");
		Matcher m = pattern.matcher("khushias.com");
		System.out.println(m.matches());
		System.out.println("hello");
		System.out.println("hello world");
	}
}