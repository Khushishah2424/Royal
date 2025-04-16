package String;

public class Numberofchar {
	
	public void Countchar(String input) {
		int count[] = new int[200];
		for(int i = 0 ; i < input.length();i++) {
			char c = input.charAt(i);
			count[c]++;			
		}
		for(int i = 0 ; i < count.length ;i++) {
			if(count[i]>0){
				System.out.println(count[i]);
			}
		}
	}
	
	public static void main(String[] args) {
		Numberofchar n = new Numberofchar();
		n.Countchar("khuussshi");
	}
}




