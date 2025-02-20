class Table{
    public synchronized void Printtbale(int no){
        for(int i = 1 ; i <=10;i++){
            System.out.println(i + " * " + no + " = " + (no * i));
        }
    }
}

class Thread11 extends Thread{
    Table t;
    public Thread11(Table t){
        this.t = t;
    }

    @Override
    public void run() {
        t.Printtbale(10);
    }
    
}

class Thread22 extends Thread{
    Table t;
    public Thread22(Table t){
        this.t = t;
    }
    
    @Override
    public void run() {
        t.Printtbale(100);
    }
    
}
public class syncronizedemo {
    public static void main(String[] args) {
        Table t = new Table();
        Thread11 t1 = new Thread11(t);
        Thread22 t2 = new Thread22(t);
        t1.start();
        t2.start();


    }
}
