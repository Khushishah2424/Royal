
import java.util.ArrayList;
import java.util.List;

public class Syncronizeddemo3{
    static List<String> fruits;
    public static int index = 0;
    public static void main(String[] args) {
        fruits = new ArrayList<String>();
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("lichi");
        fruits.add("Mango");

        Thread t1 = new Thread(Syncronizeddemo3:: Process);
        Thread t2 = new Thread(Syncronizeddemo3:: Process);
        Thread t3 = new Thread(Syncronizeddemo3:: Process);

        t1.start();
        t2.start();
        t3.start();





    }
    public synchronized  static void Process(){
                while(index<fruits.size()){
                    System.out.println(Thread.currentThread().getName() + " ->"+ fruits.get(index));
			        index++;
            }
    }
    
}
