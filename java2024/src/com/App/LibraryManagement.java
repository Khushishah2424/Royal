package com.App;

import java.util.Scanner;
//author,user
//book add
//book delete
//book update
//book rent
//rent collect
//rent display

//user can view all books
//user can rent book..
//user can pay rent..
class User{
	int id;
	String userName;
	User(int id , String userName){
		this.id = id;
		this.userName = userName;
	}
}


class Author{
	int aId;
	String authorName;
	Author(int aId ,String authorName){
		this.aId = aId;
		this.authorName = authorName;
	}
}


class Book{
	int bId;
	String bName;
	int bookRent;
	boolean IsAvailable;
	Author bookAuthor;
	
	public Book(int bId , String bName , int bookRent ,boolean IsAvailable , Author bookAuthor){
		this.bId = bId;
		this.bName = bName;
		this.bookRent = bookRent;
		this.IsAvailable =  IsAvailable;
		this.bookAuthor = bookAuthor;
}
	public Book(){
		
	}
}


public class LibraryManagement {
	
	static int flag;
	static Book book;
	public void Addbook(){
		Author A1 = new Author(1,"Ram");
		Book b1 = new Book(1,"JAVA",500,true,A1);
		book = b1;
		System.out.println("Book Added Succesfully....");
		
	}
	
	public void ViewBook(){ 
		System.out.println("************BOOK DATA************");
		System.out.println("Book-Name : "+ book.bName);
		System.out.println("Book-Id :"+book.bId);
		System.out.println("Book-Rent :"+book.bookRent);
		System.out.println("Book-Author :"+book.bookAuthor.authorName);
	}
	
	public void RentBook() {
		System.out.println("Give Book Id for Rent That Book..."); 
		Scanner sc = new Scanner(System.in);
		int bid = sc.nextInt();
		if(bid == book.bId && book.IsAvailable) {
			System.out.println("Book is Available For Rent and Rent of That Book is "+book.bookRent);
			System.out.println("Your Rent Request Has Been Approved.....");
			book.IsAvailable = false;
		}
		else {
			System.out.println("Book is not Available for Rent...");
		}
		
	}

	 public static void main(String[] args) {
		Scanner sc  = new Scanner(System.in);
		do {
			System.out.println("Please Select your role: press 1 for author press 2 for user 3 for exit");
			flag = sc.nextInt();
			LibraryManagement lb = new LibraryManagement();
			lb.Controller();
		}while(flag!=3);
	}                  
	
	public void Controller() {
		Scanner sc = new Scanner(System.in);
		int choice = 0;
		if(flag == 1) {
			do {
				System.out.println("Welcome to author dashboard...");
				System.out.println("Enter 1 for add your book...");
				System.out.println("Enter 2 for view your books");
				System.out.println("Enter 3 for exit..");
				choice = sc.nextInt();
				switch(choice) {
				case 1:
					Addbook();
					break;
				case 2:
					ViewBook();
					break;
				default:
					System.out.println("Invalid choice");
				}
			}while(choice!=3);
		}
		else if(flag == 2) {
			int userchoice = 0;
			sc = new Scanner(System.in);
			do {
				System.out.println("Welcome to User DashBoard...");
				System.out.println("Enter 1 for view All books");
				System.out.println("Enter 2 for rent the books");
				System.out.println("Enter 3 for Exit");
				userchoice = sc.nextInt();
				switch(userchoice) {
				case 1:
					ViewBook();
					break;
				case 2:
					RentBook();
					break;
				}
			}while(userchoice!=3);
	
		}
		else {
			System.out.println("Invalid Choice");
		}
	}		
}
			


	
