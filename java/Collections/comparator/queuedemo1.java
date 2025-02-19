package Collections.comparator;

import java.util.PriorityQueue;
import java.util.Queue;

public class queuedemo1 {
    public static void main(String[] args) {
        Queue<String> q = new PriorityQueue<String>();
        q.add("Amit");
        q.add("parth");
        q.add("kuaal");
        q.add("jaini");
        q.add("sjreya");

        q.remove();
        for(String s:q){
            System.out.println(s);
        }
        
    }
}
