import java.util.Scanner;

public class Main {
	public static final Scanner scanner = new Scanner(System.in);
	public static String A, B, C, D;
	public static void main(String[] args) {
		A = scanner.next();
		B = scanner.next();
		C = scanner.next();
		D = scanner.next();

		String AB = A + B;
		String CD = C + D;

		System.out.println(Long.parseLong(AB) + Long.parseLong(CD));
	}
}
