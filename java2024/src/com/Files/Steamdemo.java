package com.Files;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

public class Steamdemo {
		public static void main(String[] args) {
			try{
				InputStream input = new FileInputStream(new File("demo1.txt"));
				int c;
				while((c = input.read()) != -1) {
					System.out.println(c);
				}
				
			}
			catch(IOException e) {
				e.printStackTrace();
			}
				
		}
	}

