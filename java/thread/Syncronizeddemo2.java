
import java.util.ArrayList;
import java.util.List;

public class Syncronizeddemo2 implements Runnable{
    static List<String> fruits;
    public static int index = 0;
    public static void main(String[] args) {
        fruits = new ArrayList<String>();
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("lichi");
        fruits.add("Mango");

        Syncronizeddemo2 s = new Syncronizeddemo2();
        Thread t1 = new Thread(s);
        Thread t2 = new Thread(s);
        Thread t3 = new Thread(s);

        t1.start();
        t2.start();
        t3.start();




    }
    public static void Process(){
                while(index<fruits.size()){
                    System.out.println(Thread.currentThread().getName() + " ->"+ fruits.get(index));
			        index++;
            }
    }
    @Override
    public void run() {
      Process();
    }
}
