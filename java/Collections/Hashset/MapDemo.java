import java.util.Map;
import java.util.Map.Entry;
import java.util.TreeMap;
public class MapDemo {
	
	public static void main(String[] args) {
		
		Map<Integer, String> map = new TreeMap<Integer, String>();
		map.put(101, "ram");
		map.put(111, "see");
		map.put(121, "shyam");
		map.put(121, "shyama");
		map.put(103, "radha");
		map.put(111, "seeta");
		map.put(148, "love");
		
		
		map.containsKey(101);
		map.containsValue("love");
		
		//map.isEmpty();
		//System.out.println(map.remove(101));
		//map.remove(101, "raam");
		// map.replace(101, "Ram");
		
		//System.out.println(map.get(121));

        for(Entry<Integer,String> m :map.entrySet()){
            System.out.println(m.getKey() + " " + m.getValue());
        }
    }
}
