package oops.inheritance;
class Parent{
	int x;
	static int y = 10;
	public void test() {
		System.out.println("non static test method from parent class....");
	}
}

public class Inheritance1 extends Parent {
	public void demo() {
		test();
		System.out.println(x);
	}
	public static void main(String arg[]) {
		System.out.println(y);
	}

}

