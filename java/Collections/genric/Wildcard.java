// package Collections.genric;

import java.util.ArrayList;
import java.util.List;

public class Wildcard {
    public void printlist(List<?> list){
        for (Object s : list) {
            System.err.println(s);
        }
    }
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<Integer>();
        list.add(10);
        list.add(20);
        list.add(30);

        Wildcard w = new Wildcard();
        w.printlist(list);

        List<String> list1 = new ArrayList<String>();
        list1.add("k");
        list1.add("h");
        list1.add("u");

        Wildcard w1 = new Wildcard();
        w.printlist(list1);

    }
}
