package com.Files;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class FIlePelindrome {
	
	public static boolean isPelindrome(String str) {
		int start = 0;
		int end  = str.length() - 1;
		while(start < end) {
			if(str.charAt(start) != str.charAt(end)) {
				return false;
			}
			start++;
			end--;
		}
		
		return true;
	}
	public static void main(String[] args) {
		
		try {
			Scanner sc = new Scanner(new File("demo1.txt"));
			int count = 0;
			while (sc.hasNext()) {

				String word = sc.next();
				if (isPelindrome(word)) {
					count++;
				}

			}
			System.out.println("count = "+count);
			
			String[] palindromes = new String[count];
			int index = 0;
			while (sc.hasNext()) {

				String word = sc.next();
				if (isPelindrome(word)) {
					
					palindromes[index++] = word;
				}

			}
	

			for (int i = 0; i < palindromes.length; i++) {

				System.out.println(palindromes[i]);
			}

		} catch (FileNotFoundException e){
			e.printStackTrace();
		}

	}
}