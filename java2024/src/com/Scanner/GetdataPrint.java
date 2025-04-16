package com.Scanner;
import java.util.Scanner;

public class GetdataPrint {
	
	Scanner sc = new Scanner(System.in);
	int a;
	public void getdata() {
		System.out.println("Enter int value : ");
		a = sc.nextInt();
		
		
	}
	public void printdata(){
		System.out.println("Int = "+a);
	}
	
	public static void main(String arg[]) {
		GetdataPrint g = new GetdataPrint();
		g.getdata();
		g.printdata();
		
	}
}
