package com.random;

public class Randomdemo3 {
	public static void main(String[] args) {
		Object obj[][] = new Object[3][2];
		obj[0][0] = "Virat";
		obj[0][1] = 100;
		
		obj[1][0] = "Dhoni";
		obj[1][1] = 99;
		
		obj[2][0] = "Sachin";
		obj[2][1] = 111;
		
		for(int i = 0 ; i < obj.length;i++) {
			for(int j = 0 ; j < obj[i].length ;j++) {
				System.out.print(obj[i][j]);
				System.out.print("\t ");
			}
			System.out.println(" ");
			
		}
		
		
		
	}
}
