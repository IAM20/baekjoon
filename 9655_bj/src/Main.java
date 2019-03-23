import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scanner.nextInt();
		String result = (n % 2 == 0) ? "CY" : "SK";
		System.out.println(result);
	}
}
