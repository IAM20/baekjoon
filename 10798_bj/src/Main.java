import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		String[] strings = new String[5];
		int[] lengths = new int[5];
		for (int i = 0; i < 5; i++) {
			strings[i] = scanner.next();
			lengths[i] = strings[i].length();
		}
		for (int i = 0; i < 15; i++) {
			for (int j = 0; j < 5; j++) {
				if (lengths[j] > i) {
					System.out.print(strings[j].charAt(i));
				}
			}
		} System.out.println();
	}
}
