package com.Files;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;


public class StreamDemo2 {
	public static void main(String[] args) {
		try {
			OutputStream output = new FileOutputStream("demo1.txt");
			String data = "Hi this is india";
			byte b[] = data.getBytes();
			try {
				output.write(b);
			}
			catch(IOException e) {
				e.printStackTrace();
			}
			
		}
		catch(FileNotFoundException e) {
			e.printStackTrace();
		}
	}
}
