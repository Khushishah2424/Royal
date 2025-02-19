// package thread;

public class threaddemo4 extends Thread {

    @Override
    public void run() {

        // try {
        //     System.out.println(Thread.currentThread().getName()+"is sleeping");
        //     Thread.sleep(2000);
        // } catch (InterruptedException ex) {
        // }
       for(int i = 0;i < 5;i++){
            System.out.println(Thread.currentThread().getName()+ "  is running...");
       }
      

    }
    
    public static void main(String[] args) {
        threaddemo4 t1 = new threaddemo4();
        threaddemo4 t2 = new threaddemo4();
        threaddemo4 t3 = new threaddemo4();
        threaddemo4 t4 = new threaddemo4();

        t1.setName("A");
        t2.setName("B");
        t3.setName("C");
        t4.setName("D");

        t1.start();
        System.out.println(Thread.currentThread().getName()+"is sleeping");
        try {
            Thread.sleep(2000);
        } catch (InterruptedException ex) {
        }
        t2.start();
        t3.start();
        t4.start();
    }
}
