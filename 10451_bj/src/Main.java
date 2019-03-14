import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		int T = scanner.nextInt();
		for (int i = 0; i < T; i++) {
			int n = scanner.nextInt();
			boolean[] visited = new boolean[n + 1];
			int[] arr = new int[n + 1];

			for (int j = 1; j <= n; j++) {
				visited[j] = false;
				arr[j] = scanner.nextInt();
			}
			int result = 0;
			for (int j = 1; j <= n; j++) {
				if (visited[j]) {
					continue;
				}
				result++;
				int start = j;
				while (!visited[start]) {
					visited[start] = true;
					start = arr[start];
				}
			}
			visited = null;
			arr = null;
			System.out.println(result);
		}
	}
}
