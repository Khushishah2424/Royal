package com.Exception;
import java.util.Scanner;

public class CustomExcpetion2{
	public static void main(String[] args) throws InvalidStringException{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a name");
		String str = sc.next();
		if(str.length() < 5) {
			throw new InvalidStringException("Length must be greater than 5");
		}
	}
				
}
