package com.rev;

import java.util.Scanner;
import java.util.InputMismatchException;

public class Exceptiondemo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			String name = "Ram";
			System.out.println("Enter Index : ");
			int index = sc.nextInt();
			System.out.println(name.charAt(index));	
			
		}
		catch(InputMismatchException | StringIndexOutOfBoundsException  e) {
			System.out.println("Please Check your Input");
		}
		finally {
			System.out.println("End....");
		}
	}
}
