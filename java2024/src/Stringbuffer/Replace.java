package Stringbuffer;

public class Replace {
	public String repalce(String str)
	{
	    StringBuffer sb = new StringBuffer(str);
	    return sb.replace(11,22 ," ").toString();
	}
	
	public static void main(String[] args) {
		
		Replace r1 = new Replace();
		String str = r1.repalce("Hi this is Beautifull city and beautifull Mountains");
		System.out.println(str);
	}

}
 
