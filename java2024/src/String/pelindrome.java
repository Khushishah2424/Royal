package String;

public class pelindrome {
	
	public void Pelindrome(String name) {
		String[] x = name.split(" ");
		int count = 0;
		
		for(int i = 0 ; i < x.length;i++) {
			String word = x[i];
			String temp = "";
			
			for(int j = word.length()-1;j >= 0;j--) {
				temp = temp + word.charAt(j);
			}
			if(temp.equals(word)) {
				System.out.println(word + " is pelindrome");
				count++;
			}
			else {
				System.out.println(word + " is not pelindrome");
			 }
			}
		System.out.println("Totol number of pelindrome is "+ count);
	
		}
		
		

	public static void main(String[] args) {
		pelindrome p = new pelindrome();
		p.Pelindrome("kanak naman hello wordld");
		
	}
}
