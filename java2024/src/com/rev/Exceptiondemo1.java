package com.rev;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Exceptiondemo1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			System.out.println("Enter no1 :");
			int no1 = sc.nextInt();
			System.out.println("Enter no2 :");
			int no2 = sc.nextInt();
			
			int ans = no1/no2;
			System.out.println("Ans ="+ans);
			
			
		}
		catch(ArithmeticException e) {
			System.out.println("can not divid by 0");
		}
		catch(InputMismatchException e) {
			System.out.println("Please enter valid Input");
		}
		catch(Exception e) {
			System.out.println("Something Went Wrong");
		}
	}
}
