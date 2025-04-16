package com.Files;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class Filedemo1{
	public void createFile() {

		System.out.println("enter txt file name to create.. ");
		Scanner sc = new Scanner(System.in);
		String fileName = sc.next();
		File file = new File(fileName.concat(".txt"));
		try {
			if (file.createNewFile()) {
				System.out.println(fileName + " file created ");
			} else {
				System.out.println("file can not create...");
			}
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}
	
	
	
	
}
