import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		long a = scanner.nextLong();
		long b = scanner.nextLong();
		long v = scanner.nextLong();
		long result = (v - a) / (a - b) + (((v - a) % (a - b) != 0) ? 1 : 0) + 1;

		System.out.println(result);
	}
}
