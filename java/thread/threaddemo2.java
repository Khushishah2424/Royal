// package thread;
class thread1 extends  Thread{

    @Override
    public void run() {
        System.err.println(Thread.currentThread().getName() + "running");
    }
    
}
class thread2 extends  Thread{

    @Override
    public void run() {
        System.err.println(Thread.currentThread().getName() + "running");
    }
    
}
public class threaddemo2{

    public static void main(String[] args) {
        thread1 t1 = new thread1();
        thread2 t2 = new thread2();
        t1.start();
        t2.start();
    }
}
