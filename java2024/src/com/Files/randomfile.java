package com.Files;

import java.io.IOException;
import java.io.RandomAccessFile;
public class randomfile {
	public static void main(String[] args) {
		Double d = 100.50;
		float f = 3.14f;
		try {
			RandomAccessFile random = new RandomAccessFile("demo1.txt","rw");
			random.writeUTF("hello");
					
			random.writeChar('c');
			random.seek(0);
			System.out.println(random.readChar());
			
			random.seek(0);
			random.writeDouble(d);
			random.seek(0);
			System.out.println(random.readDouble());
			
			random.seek(0);
			random.writeFloat(f);
			random.seek(0);
			System.out.println(random.readFloat());
			
			random.seek(0);
			random.writeInt(100);
			random.seek(0);
			System.out.println(random.readInt());


			random.seek(0);
			byte[] arr = new byte[(int)random.length()];
			random.readFully(arr);

			String str1 = new String(arr);
			System.out.println(str1);
		}
		catch(IOException e) {
			e.printStackTrace();
		}
	}
}
