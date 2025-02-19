// package thread;

public class Threaddemo3 {
    public static void main(String[] args) {
        Runnable t1 =()->{
            System.err.println("Thread is Running");
        };
        
        Runnable t2 =()->{
            System.err.println("Thread is Running");
        };
        t1.run();
        t2.run();
        
    }
}