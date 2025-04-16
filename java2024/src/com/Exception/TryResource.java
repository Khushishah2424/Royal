package com.Exception;

public class TryResource {
	
	public void Divide(int no1,int no2)throws Exception{
		System.out.println("ans = " + no1/no2);
	}
	
	public static void main(String[] args){
		TryResource t = new TryResource();
		try {
		t.Divide(10, 2);
		}
		catch(Exception e) {
			System.out.println("can not divide by zero");
		}
	 
	}
}
