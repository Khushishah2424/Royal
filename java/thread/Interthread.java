class Calling{
    public synchronized void docall(int flag){
        System.out.println(Thread.currentThread().getName()+"is making a call..");
        if(flag == 1){
            System.out.println(Thread.currentThread().getName() + " is putting its call on hold (waiting)...");
            try {
                wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println(Thread.currentThread().getName() + " resumed its call after being notified.");
        }
        else{
            System.out.println(Thread.currentThread().getName() + " is notifying waiting call...");
            notify();
        }
        System.out.println(Thread.currentThread().getName() + " call is completed.");
    }
}

class Call1 extends Thread{
    Calling c;
    public Call1(Calling c){
        this.c = c;
    }

    @Override
    public void run() {
        c.docall(1);
    }
    
}
class Call2 extends Thread{
    Calling c;
    public Call2(Calling c){
        this.c = c;
    }

    @Override
    public void run() {
        c.docall(0);
    }
    
}
public class Interthread {
    public static void main(String[] args) {
        Calling calling = new Calling();
		Call1 c1 = new Call1(calling);
		Call2 c2 = new Call2(calling);

		c1.setName("AMIT");
		c2.setName("RAJ");

		c1.start();
		c2.start();
    }
}
