// package Collections.predicate;
import java.util.function.Predicate;

public class predicatedemo {

    public static boolean check(int no,Predicate<Integer> predicate){
        return predicate.test(no);
    } 
    public static void main(String[] args) {
        Predicate<Integer> isEven = (num)->num%2==0;
        Predicate<String> istrue = (word)->(word.startsWith("A"));
        System.err.println(istrue.test("Seeta"));
        System.err.println(isEven.test(101));

        System.err.println(check(90, x->x>=100));


    }
}