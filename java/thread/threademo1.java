// package thread;

public class threademo1 extends Thread{
    public void run(){
        for(int i = 0 ;i < 3;i++){
            System.out.println(Thread.currentThread().getName() + " Running = " + i);
        }
    }
    public static void main(String[] args) {
        threademo1 t1 = new threademo1();
        threademo1 t2 = new threademo1();
        threademo1 t3 = new threademo1();

        t1.setName("A");
        t2.setName("B");
        t3.setName("C");
        t1.start();
        try {
            t1.join();
        } catch (InterruptedException ex) {
        }
        t2.start();
        t3.start();
        
    }
}
 