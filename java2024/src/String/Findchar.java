package String;

public class Findchar{
	public static void main(String[] args) {
		String name = "Hi this is India";
		int count = 0;
		for(int i  = 0;i < name.length();i++) {
			if(name.charAt(i) == 'i') {
				count++;
			}
		}
		System.out.println(count);
	}
}







