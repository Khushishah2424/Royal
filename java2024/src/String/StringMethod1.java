package String;

public class StringMethod1 {
	public static void main(String arg[]) {
		String name = "Amit";
		System.out.println(name);
		
		name = name.concat(" Patel");
		System.out.println(name);
		
		name = name.toUpperCase();
		System.out.println(name);
		
		
		name = name.toLowerCase();
		System.out.println(name);
		
		int len = name.length();
		System.out.println("Len of String"+len);
		
		String email = "  Raj@gmail.com  ";
		System.out.println("email len = "+email.length());
		
		email = email.trim(); 
		System.out.println("email len = "+email.length());
		
		int ind = email.indexOf('@');
		System.out.println("index of "+ind);
		
		int lind = email.lastIndexOf('@');
		System.out.println("last index "+lind);
		
		ind = email.indexOf('@', 5);
		System.out.println("index of from char... "+ind);
		
		char c = email.charAt(3);
		System.out.println("c = "+c);
		
		
		
		
		
		
		
		
	}
}
