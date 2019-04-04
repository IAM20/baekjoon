import java.util.Scanner;

public class Main {
	private static final Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		int a, b, c;
		a = scanner.nextInt();
		b = scanner.nextInt();
		c = scanner.nextInt();

		int result = ((b - a) > (c - b)) ? (b - (a + 1)) : (c - (b + 1));
		System.out.println(result);
	}
}
