package String;

public class ReverseString {
	
	
	public String ReverseString(String name) {
		String rev= " ";
		for(int i = name.length() -1 ; i >= 0;i--) {
			rev = rev + name.charAt(i);
		}
		return rev;
	}
	
	public static void main(String[] args) {
		ReverseString s1 = new ReverseString();
		String ans = s1.ReverseString("Khushi");
		System.out.println(ans);
	}
}
