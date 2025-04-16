package com.Scanner;
import java.util.Scanner;

public class ScannerDemo1 {
	public static void main(String arg[]) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter String : ");
		String name = sc.nextLine();
		System.out.println("String = "+name);
		
		
		System.out.println("Enter int value : ");
		int a = sc.nextInt();
		System.out.println("Int = "+a);
		
		System.out.println("Enter Float value : ");
		float b = sc.nextFloat();
		System.out.println("Float = "+b);
		
	}
}
