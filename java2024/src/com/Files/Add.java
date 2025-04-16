package com.Files;
import java.io.*;
import java.util.Scanner;
import java.io.FileWriter;

public class Add {
	    public static void main(String[] args) {
	        Scanner sc = new Scanner(System.in);
	        
	        System.out.println("Enter no1 Number: ");
	        int no1 = sc.nextInt();
	        System.out.println("Enter no2 Number: ");
	        int no2 = sc.nextInt();
	        
	        int sum = no1 + no2;
	        
	        try {
	        	FileWriter writer = new FileWriter("demo1.txt");
	            writer.write("Number1: " + no1 + "\n");
	            writer.write("Number2: " + no2 + "\n");
	            writer.write("Sum: " + sum + "\n");
	            writer.close();
	
	            
	        } catch (IOException e) {
	            e.printStackTrace();
	        }
	        
	        sc.close(); 
	    }
	} 



