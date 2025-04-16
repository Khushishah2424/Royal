package com.Exception;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Exceptiondemo1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			System.out.println("Enter 1 no");
			int no1 = sc.nextInt();
			System.out.println("Enter 1 no");
			int no2 = sc.nextInt();
			int ans = no1/no2;
			System.out.println("Ans = "+ans);
			System.out.println("End....");
		}
		catch(ArithmeticException e){
			System.out.println("Can not Divded by Zero");
		}
		catch(InputMismatchException e){
			System.out.println("Pls check input");
		}
		catch(Exception e) {
			System.out.println("something went wrong..");
		}
		finally {
			System.out.println("finally block...");
		}
	}
}
