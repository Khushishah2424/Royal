package com.random;

import java.util.Random;

public class Random1 {
	public static void main(String[] args) {
		
	
			String users[] = new String[] {"ram","shyam","seeta","geeta","hari"};
			Random random = new Random();
			int rno = random.nextInt(5);
			System.out.println(rno);
			System.out.println(users[rno]);
	}
}
