import java.util.ArrayDeque;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Pair {
	int left;
	int right;
	Pair() {
		this(0, 0);
	}

	Pair(int left, int right) {
		this.left = left;
		this.right = right;
	}
}

class Data {
	int depth;
	char[][] matrix;

	Data() {
		depth = 0;
	}

	Data(int n, int m) {
		depth = 0;
		matrix = new char[n][m];
	}
}

public class Main {
	private static final Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		int n = scanner.nextInt();
		int m = scanner.nextInt();

		Pair r = new Pair();
		Pair l = new Pair();
		Pair o = new Pair();

		char[][] matrix = new char[n][m];
		boolean[][] visited = new boolean[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matrix[i][j] = (char)scanner.nextByte();
				if (matrix[i][j] == 'R') {
					r.left = i;
					r.right = j;
				} else if (matrix[i][j] == 'B') {
					l.left = i;
					l.right = j;
				} else if (matrix[i][j] == '0') {
					o.left= i;
					o.right = j;
				}
			}
		}
		Data firstData = new Data();
		firstData.matrix = matrix;
		ArrayDeque<Data> queue = new ArrayDeque<>();
		queue.add(firstData);

		while (!queue.isEmpty()) {
			Data data = queue.pop();
			int depth = data.depth;

		}
	}
}
