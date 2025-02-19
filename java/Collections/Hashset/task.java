
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;
public class task {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Set<String> ts = new TreeSet<String>();
        Set<String> hs = new HashSet<String>();

        ts.add("zgo");
		hs.add("zgo");
		
		ts.add("efg");
		hs.add("efg");
		
		ts.add("hij");
		hs.add("hij");
		
		ts.add("klm");
		hs.add("klm");

        System.out.println("Enter which type you want to display : 1. Hashset 2. TreeSet");
		int choose = sc.nextInt();
        switch (choose) {
            case 1:
                for(String h : hs) {
                    System.out.println(h);
                }
                break;
    
            case 2:
                for(String t : ts) {
                    System.out.println(t);
                }
                break;
            
            default:
                break;
            }

     }
}   
