package com.Array;

import java.util.Arrays;

public class Arraydemo1 {
	public static void main(String[] args) {
		int x[] = new int[10];
		int y[] = new int[] {1,2,3,4,5};
		
		Arrays.sort(y);
//		for(int i = 0 ; i < y.length ;i++) {
//			System.out.println(y[i]);
//		}
		for(int i:y) {
			System.out.println(i);
		}
		
		int ind = Arrays.binarySearch(y, 3);
		System.out.println("Index "+ind);
		
		String str[] = new String[] {"Khushi","Raj","Hetvi"};
		Arrays.sort(str);

		for(String s:str) {
			System.out.println(s);
		}
		
		int ind1 = Arrays.binarySearch(str, "Khushi");
		System.out.println("index1 = "+ind1);
		
		int y1[] = Arrays.copyOf(y, 5);
		for(int s:y1) {
			System.out.println(s);
		}
		
	}
}
