import java.util.*;

public class Main {
	private final static Scanner scanner = new Scanner(System.in);
	private static Set<Integer> remainers = new HashSet<>();
	private static int min = Integer.MAX_VALUE;
	private static int[][] matrix;
	private static int n;

	private static void calculate(int[] arr) {
		int result = 0;
		int result2 = 0;
		Integer[] arr2 = remainers.toArray(Integer[]::new);

		for (int x : arr) {
			for (int y : arr) {
				result += matrix[x][y] + matrix[y][x];
			}
		}
		for (int x : arr2) {
			for (int y : arr2) {
				result2 += matrix[x][y] + matrix[y][x];
			}
		}

		result = result - result2;
		result = (result < 0) ? result * -1 : result2;
		result /= 2;
		if (result < min) {
			min = result;
		}
	}

	private static void combination(int[] combinationSet, int now, int remain) {
		if (remain == 0) {
			calculate(combinationSet);
			return;
		}

		for (int i = now + 1; i <= n - (remain - 1); i++) {
			combinationSet[n / 2 - remain] = i;
			remainers.remove(i);
			combination(combinationSet, i, remain - 1);
			remainers.add(i);
		}
	}

	public static void main(String[] args) {
		n = scanner.nextInt();
		matrix = new int[n + 1][n + 1];

		for (int i = 1; i <= n; i++) {
			remainers.add(i);
			for (int j = 1; j <= n; j++) {
				matrix[i][j] = scanner.nextInt();
			}
		}
		int remain = n / 2;
		int[] arr = new int[remain];
		combination(arr, 0, remain);

		System.out.println(min);
	}
}
