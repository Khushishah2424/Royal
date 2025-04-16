package com.Files;

import java.io.FileWriter;
import java.io.IOException;

public class FileWriterdemo {

		public static void main(String[] args) {
			try {
				FileWriter writer = new FileWriter("demo.txt",true);
				writer.write("Hello this is file 2");
				writer.close();
				System.out.println("done");
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
