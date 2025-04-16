package String;

public class LargestWord  {
	
	public void LargestWord(String name) {
		
		
		String x[] = name.split(" ");
		String Longestword  = "";
		for(int i = 0 ; i < x.length;i++) {
			if(x[i].length() > Longestword.length()) {
				Longestword = x[i];
			}
			
		}
		System.out.println(Longestword);
		
	
	
	}
	
	public static void main(String[] args) {
		LargestWord  l1 = new LargestWord();
		String name = "Hi this is India";
		l1.LargestWord(name);
	}
}
