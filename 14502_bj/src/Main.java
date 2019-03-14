import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Pair<T1, T2> {
	T1 left;
	T2 right;
	Pair(T1 t1, T2 t2) {
		left = t1;
		right = t2;
	}
}

public class Main {
	private static final int SPACE = 0;
	private static final int WALL = 1;
	private static final int INFECTED = 2;

	private static int n;
	private static int m;
	private static Scanner scanner = new Scanner(System.in);

	private static int getSpace(int[][] matrix, int total) {
		boolean[][] visited = new boolean[n][m];
		ArrayDeque<Pair<Integer, Integer>> queue = new ArrayDeque<>();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (INFECTED == matrix[i][j]) {
					queue.addFirst(new Pair<>(i, j));
					visited[i][j] = true;
				} else {
					visited[i][j] = false;
				}
			}
		}

		while (!queue.isEmpty()) {
			Pair<Integer, Integer> pair = queue.getFirst();
			queue.removeFirst();
			int x = pair.left;
			int y = pair.right;

			if (x < n - 1 && SPACE == matrix[x + 1][y] && !visited[x + 1][y]) {
				queue.addFirst(new Pair<>(x + 1, y));
				visited[x + 1][y] = true;
				total--;
			}
			if (x > 0 && SPACE == matrix[x - 1][y] && !visited[x - 1][y]) {
				queue.addFirst(new Pair<>(x - 1, y));
				visited[x - 1][y] = true;
				total--;
			}
			if (y < m - 1 && SPACE == matrix[x][y + 1]&& !visited[x][y + 1]) {
				queue.addFirst(new Pair<>(x, y + 1));
				visited[x][y + 1] = true;
				total--;
			}
			if (y > 0 && SPACE == matrix[x][y - 1] && !visited[x][y - 1]) {
				queue.addFirst(new Pair<>(x, y - 1));
				visited[x][y - 1] = true;
				total--;
			}
		}
		return total;
	}

	public static void main(String[] args) {
		n = scanner.nextInt();
		m = scanner.nextInt();
		List<Pair<Integer, Integer>> lists = new ArrayList<>();

		int result = 0;
		int totalZero = n * m;
		int[][] matrix = new int[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matrix[i][j] = scanner.nextInt();
				if (0 != matrix[i][j]) {
					totalZero--;
				} else {
					lists.add(new Pair<>(i, j));
				}
			}
		}
		int size = lists.size();
		totalZero -= 3;
		for (int i = 0; i < size; i++) {
			for (int j = i + 1; j < size; j++) {
				for (int k = j + 1; k < size; k++) {
					Pair<Integer, Integer> first = lists.get(i);
					Pair<Integer, Integer> second = lists.get(j);
					Pair<Integer, Integer> third = lists.get(k);
					matrix[first.left][first.right] = WALL;
					matrix[second.left][second.right] = WALL;
					matrix[third.left][third.right] = WALL;
					int tmpResult = getSpace(matrix, totalZero);
					result = (result < tmpResult) ? tmpResult : result;
					matrix[first.left][first.right] = SPACE;
					matrix[second.left][second.right] = SPACE;
					matrix[third.left][third.right] = SPACE;
				}
			}
		}
		System.out.println(result);
	}
}
