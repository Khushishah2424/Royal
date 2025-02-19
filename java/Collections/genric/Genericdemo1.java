// package Collections.genric;

class Box<T>{
    public void test(T a){
        System.err.println("a="+a);
    }
}


class Bottle<T extends  Number>{
    public void Water(T a){
        System.err.println("Value of a"+ a);
    }
}

public class Genericdemo1 {
    public void demo(int x){
        System.err.println("x"+x);
    }
     public static void main(String[] args) {
        // Genericdemo1 g1 = new Genericdemo1();
        // g1.demo(100);


    Box<String> b1 = new Box<String>();
    b1.test("om");
    Box<Integer> b2= new Box<Integer>();
    b2.test(10);



   
    
    }
}
