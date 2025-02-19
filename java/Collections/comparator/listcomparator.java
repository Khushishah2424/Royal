// package Collections.comparator;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

class LengthCompartor implements Comparator<String>{

    @Override
    public int compare(String o1, String o2) {
        // TODO Auto-generated method stub
       return  Integer.compare(o1.length(),o2.length());

    }
    
}

public class listcomparator {
    public static void main(String[] args) {
        List<String> list  = new ArrayList<String>();
        list.add("Disha");
        list.add("MOkshita");
        list.add("Yash");
        list.add("Nandidni");
        list.add("Dhrashti");
        list.sort(new LengthCompartor());

        for(String s:list){
            System.out.println(s);
        }


    }
}
