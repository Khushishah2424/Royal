import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class maptask {

    public static void main(String[] args) {
        Map<String, String> map = new TreeMap<>();
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number of entries you want to add: ");
        int size = sc.nextInt();
        sc.nextLine();
        
        for (int i = 0; i < size; i++) {
            System.out.print("\nEnter the country name: ");
            String country = sc.nextLine();
            
            if (map.containsKey(country)) {
                System.out.println("This country is already in the map. Please enter a different country.");
                i--;
                continue;
            }
            
            System.out.print("Enter the capital: ");
            String capital = sc.nextLine().trim();
            
            map.put(country, capital);
        }
        

        System.out.println("\nMap");
        for (Map.Entry<String, String> entry : map.entrySet()) {
            System.out.println("Country: " + entry.getKey() + ", Capital: " + entry.getValue());
        }
        
    }
}


