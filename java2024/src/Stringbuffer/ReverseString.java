package Stringbuffer;

public class ReverseString {

	    
	    public String rev(String str){
	        StringBuffer sb = new StringBuffer(str);
	        return sb.reverse().toString();
	    }
	    
	    public static void main(String[] args){
	        ReverseString rs = new ReverseString();
	        String str1 = rs.rev("krisha");
	        System.out.println(str1);   
	    }
	
}
