// package Collections.comparator;
// package Collections.queue;

// compare student with CGPA desc
import java.util.Comparator;
import java.util.PriorityQueue;

class Student{
    
    String name;
    double cgpa;

    public Student(String name, double cgpa) {
        this.name = name;
        this.cgpa = cgpa;
    }
    public String toString() {
        return "(name = " + name + ", CGPA = " + cgpa + ")";
    }
}

class StudentComparator implements Comparator<Student> {

    public int compare(Student s1, Student s2) {
        return Double.compare(s2.cgpa, s1.cgpa);
    }
}

public class comparatordemo {
    public static void main(String[] args) {
        PriorityQueue<Student> students = new PriorityQueue<>(new StudentComparator());
        students.add(new Student("Amit", 7.5));
        students.add(new Student("Raj", 8.9));
        students.add(new Student("Ajay", 9.2));
        students.add(new Student("Kunal", 6.8));
        while(!students.isEmpty()){
            System.out.println(students.remove());
        }
        // for(Student s:students ){
        //     System.out.println(s);
        // }

    }



}
