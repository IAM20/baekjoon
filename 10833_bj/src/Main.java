import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scanner.nextInt();
		int school;
		int apple;
		int result = 0;
		for (int i = 0; i < n; i++) {
			school = scanner.nextInt();
			apple = scanner.nextInt();
			result += apple % school;
		}
		System.out.println(result);
	}
}
