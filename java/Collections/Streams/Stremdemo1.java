// package Collections.Streams;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class Stremdemo1{
    public static void main(String[] args) {
        List<String> names =Arrays.asList("Amit","Shyam","Sundar");
        // names.stream().forEach(System.out::println);

        System.out.println("Startswith s");
        names.stream().filter(x->x.startsWith("S")).forEach(System.out::println);

        System.out.println("Add in new list");
        List<String> Filternames = names.stream().filter(x->x.startsWith("S")).collect(Collectors.toList());
        Filternames.stream().forEach(System.out::println);

        System.err.println("Uppercase");
        List<String> Uppername = names.stream().map(String :: toUpperCase).collect(Collectors.toList());
        Uppername.stream().forEach(System.out::println);

        List<Integer> numbers = Arrays.asList(12,33,56,3,78);
        numbers.stream().filter(x->x%2 == 0).forEach(System.out::println);

        numbers.stream().map(x->x+10).forEach(System.out::println);
       
    }
}
