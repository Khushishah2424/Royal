package String;
import java.util.*;

public class Formula {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter formula = ");
		String res = sc.nextLine();
		int result = 0;
		if(res.contains("+")) {
			String split[] = res.split("\\+");
			result = Integer.parseInt(split[0]) + Integer.parseInt(split[1]);
		}
		else {
            System.out.println("Invalid expression.");
            return;
        }
		 System.out.println("The answer is: " + result);

	}
}
