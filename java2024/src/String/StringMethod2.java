package String;

public class StringMethod2 {
	public static void main(String[] args) {
		String data = "India";
		System.out.println("StartsWith "+data.startsWith("I"));
		System.out.println("Ends with "+data.endsWith("a"));
		System.out.println(data.equals(data));
		System.out.println(data.equalsIgnoreCase("india"));
		System.out.println(data.contains("di"));
		System.out.println(data.isEmpty());
	}
}
