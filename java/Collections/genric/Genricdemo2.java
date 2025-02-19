// package Collections.genric;

public class Genricdemo2 {
    public <T> void demo(T a){
        System.out.println("a =" + a);
    }
    public <T> T demo1(T a){
        System.out.println("a ="+a);
        return a;
    }
    
   public static void main(String[] args) {
        Genricdemo2 g1 = new Genricdemo2();
        g1.demo("heyy");
        g1.demo1("Khushi");
   } 
}  
