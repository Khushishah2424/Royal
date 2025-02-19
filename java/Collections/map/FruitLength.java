//sort by fruit's length
//use of tree map only
import java.util.Comparator;
import java.util.Map.Entry;
import java.util.TreeMap;



class FruitComparator implements Comparator<String>
{

	@Override
	public int compare(String o1, String o2) {
		// TODO Auto-generated method stub
		return Integer.compare(o1.length(), o2.length());
	}
	
}
public class FruitLength {
	

	
	public static void main(String[] args) {
		

		
		TreeMap<String, Integer> tmap = new TreeMap<String,Integer>(new FruitComparator());

		tmap.put("Apple", 10);
		tmap.put("Kiwi", 20);
		tmap.put("Mango", 5);
		tmap.put("Banana", 13);
		tmap.put("Chery", 1);
		tmap.put("berryyyy", 1);

		
		
		for(Entry e: tmap.entrySet())
		{
			System.out.println(" " + e.getKey() + " " + e.getValue());
		}
		
	}

}
