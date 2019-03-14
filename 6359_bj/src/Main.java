import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int T = scanner.nextInt();
		for (int i = 0; i < T; i++) {
			int n = scanner.nextInt();
			int result = 0;
			boolean[] arr = new boolean[n + 1];
			for (int j = 1; j <= n; j++) {
				arr[j] = false;
			}
			for (int j = 1; j <= n; j++) {
				for (int k = j; k <= n; k += j) {
					arr[k] = !arr[k];
				}
			}

			for (int j = 1; j <= n; j++) {
				if(arr[j]) {
					result++;
				}
 			}
			System.out.println(result);
		}
	}
}
