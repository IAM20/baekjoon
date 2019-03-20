import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int R = scanner.nextInt();
		int C = scanner.nextInt();
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				System.out.print("*");
			}System.out.println();
		}
	}
}
