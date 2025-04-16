package com.Exception;
import java.util.*;

public class Exceptiondemo2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
			try{
				System.out.println("enter no1 ");
				int no1 = sc.nextInt();
				System.out.println("enter no2 ");
				int no2 = sc.nextInt();
				int ans = no1/no2;
				System.out.println("ans =  "+ans);
				
			}
			catch(ArithmeticException | InputMismatchException e) {
				System.out.println("Please check Input");
			}

	}
}