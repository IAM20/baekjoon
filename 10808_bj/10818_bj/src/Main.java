import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String buf = scanner.nextLine();
		int n = Integer.valueOf(buf);
		int min = 1000000;
		int max = -1000000;
		int tmp;
		for(int i = 0; i < n; i++) {
			if((tmp = scanner.nextInt()) <= min) {
				min = tmp;
			}
			if (tmp >= max) {
				max = tmp;
			}
		}

		System.out.println(min + " " + max);
	}
}
