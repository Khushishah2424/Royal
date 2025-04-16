package com.Exception;
import java.util.*;

public class Array {

		public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			int a[] = new int[5];
			System.out.println("Enter 5 int  ");
			for(int i = 0 ; i < a.length ;i++) {
				System.out.println("Elements "+(i + 1) + ":");
				a[i] = sc.nextInt();
			}
			
			System.out.println("Enter an index do you want to see");
			int index = sc.nextInt();
			try {
				System.out.println("Value at index "+ index + ":" + a[index]);
			}
			catch(Exception e) {
				System.out.println("Arrya idnex out of the bounds");
			}
;		}


}
