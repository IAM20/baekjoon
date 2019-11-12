import java.util.Scanner;

public class Main {
	private static final Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		boolean[] check = new boolean[42];

		for (int i = 0; i < 42; i++) {
			check[i] = false;
		}

		for (int i = 0; i < 10; i++) {
			int input = scanner.nextInt();
			check[input % 42] = true;
		}
		int result = 0;
		for (int i = 0; i < 42; i++) {
			if (check[i]) {
				result++;
			}
		}

		System.out.println(result);
	}
}
