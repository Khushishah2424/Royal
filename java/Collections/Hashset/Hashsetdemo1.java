import java.util.HashSet;

class Hashsetdemo1{
    public static void main(String[] args) {
        HashSet<String> hashset = new HashSet<String>();
        hashset.add("java");
        hashset.add("cpp");
        hashset.add("oop");
        hashset.add("python");

        for(String s:hashset){
            System.out.println(s);
        }


    }
}