package com.random;
import java.util.Random;

public class Randomdemo4 {
	public static void main(String[] args) {
		Object obj[][]  = new Object[3][2];
		Random random = new Random();
		obj[0][0] = "Virat";
		obj[1][0] = "Sachin";
		obj[2][0] = "Dhoni";
		int sum = 0;
		for(int i = 0 ; i < 3;i++) {
			for(int j = 1 ;j <= 6;j++) {
				int runs = random.nextInt(7);
				sum = sum + runs;
			}
			obj[i][1] = sum;
			sum = 0;
		}
		for(int i = 0 ; i < obj.length ;i++) {
			for(int j = 0 ; j < obj[i].length ;j++) {
				System.out.print(obj[i][j]);
				System.out.print("\t ");
			}
			System.out.println("  ");
		}
		
	}
}
