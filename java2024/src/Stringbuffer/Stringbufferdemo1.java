package Stringbuffer;

public class Stringbufferdemo1 {
        public static void main(String[] args){	
		StringBuffer sbr = new StringBuffer("ram");
		System.out.println(sbr);
		
		sbr.append(" Seeta");
		System.out.println(sbr);
		
		sbr.delete(1,4);
		System.out.println(sbr);
		
		char c = sbr.charAt(1);
		System.out.println(c);

		sbr.delete(1, 3); 
		System.out.println(sbr);
		
		sbr.insert(1, "am");
		System.out.println(sbr);
																
		sbr.replace(0, 4, "#");				  
		System.out.println(sbr);
		
		sbr.reverse();
		System.out.println(sbr);
		
		sbr.deleteCharAt(4);
		System.out.println(sbr);
	}
}
