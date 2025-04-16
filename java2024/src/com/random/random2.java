package com.random;

import java.util.Random;

public class random2 {
	public static void main(String[] args) {
		int player1sum = 0;
		int player2sum = 0;
		Random random = new Random();
		
		
		System.out.println("Player 1:");
		for(int i = 0 ; i < 6 ; i++) {
			 int rno = random.nextInt(7);
			 player1sum =  player1sum + rno;
			 System.out.println("Run " + (i + 1) + " = " + rno);
		}	
		
		System.out.println("Player 2:");
		for(int i = 0 ; i < 6 ; i++) {
			 int rno = random.nextInt(6);
			 player2sum =  player2sum + rno;
			 System.out.println("Run " + (i + 1) + " = " + rno);
		}
		
		System.out.println("\nTotal runs for Player 1: " + player1sum);
		System.out.println("Total runs for Player 2: " + player2sum);
		
		if(player1sum > player2sum) {
			System.out.println("Player 1 wins");
		}
		else if(player1sum < player2sum) {
			System.out.println("Player 2 wins");
		}
		else {
			System.out.println("It is a tie");
		}
		 
		
	}
}








