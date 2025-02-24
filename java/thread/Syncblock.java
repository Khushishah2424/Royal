class Cloud{
    public synchronized void Storage(String name){
        System.out.println("Auth by..."+Thread.currentThread().getName());
        synchronized(this){
            for(int i = 0 ; i <= 5;i++){
                System.out.println("Thread"+Thread.currentThread().getName()+"..is Accessimng cloud"+name);
            }
        }
        System.out.println("Auth done..."+Thread.currentThread().getName());
    }
}

class Gdrive extends Thread{
    Cloud c;
    public Gdrive(Cloud c){
        this.c = c;
    }

    @Override
    public void run() {
        c.Storage("Google Drive...");
    }
    

}

class Dropbox extends Thread{
    Cloud c;
    public Dropbox(Cloud c){
        this.c = c;
    }

    @Override
    public void run() {
        c.Storage("DropBox...");
    }
    

}
public class Syncblock {
    public static void main(String[] args) {
        Cloud c =  new Cloud();
        Gdrive g = new Gdrive(c);
        Dropbox d = new Dropbox(c);

        g.start();
        d.start();
        

    }
}
