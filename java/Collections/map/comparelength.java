// package Collections.map;

import java.util.Comparator;
import java.util.Map;
import java.util.TreeMap;

class flengthComparator implements Comparator<String>{

    @Override
    public int compare(String o1, String o2) {
        // TODO Auto-generated method stub
        return Integer.compare(o1.length(),o2.length());
    }
}


public class comparelength {
    public static void main(String[] args) {
        Map<String,Integer> tmap = new TreeMap<String,Integer>(new flengthComparator());
        tmap.put("kiwi", 200);
        tmap.put("banana", 190);
        tmap.put("Apple", 190);  
        for(java.util.Map.Entry<String, Integer> Map : tmap.entrySet())
		{
			System.out.println(" " + Map.getKey() + " " + Map.getValue());
		}

    }
}
