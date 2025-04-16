package com.Exception;

class InvalidAgeException extends Exception {
	public InvalidAgeException(String str) {
		super(str);
	}
}
public class CustomException{
	public void checkAge(int age)throws InvalidAgeException {
		if(age<18) {
			throw new InvalidAgeException("Age is not valid");
		}
	}
	
	public static void main(String[] args) {
		CustomException c = new CustomException();
		try {
			c.checkAge(10);
		}
		catch (InvalidAgeException e) {
			System.out.println(e.getMessage());
		}	
	}
}

