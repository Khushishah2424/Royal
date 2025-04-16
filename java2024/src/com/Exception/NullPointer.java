package com.Exception;
import java.util.*;

public class NullPointer {
	public static void main(String[] args) {
		int a[] = null;
		try {
			for(int i = 0 ; i < 5;i++) {
				System.out.println(a[i]);
			}
		}
		catch(Exception e) {
			System.out.println("Null-pointer");
		}
		
	}
}
