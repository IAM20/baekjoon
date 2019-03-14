import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Scanner;

class IntPair {
	int x;
	int y;
	int depth;
	IntPair(int x, int y, int depth) {
		this.x = x;
		this.y = y;
		this.depth = depth;
	}
	IntPair(int x, int y) {
		this(x, y, 0);
	}

}

public class Main {
	private static Scanner scanner = new Scanner(System.in);

	private static int getBfsResult(int l, int nowX, int nowY, int resultX, int resultY) {
		boolean[][] visited = new boolean[l][l];
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < l; j++) {
				visited[i][j] = false;
			}
		}
		ArrayDeque<IntPair> queue = new ArrayDeque<>();;
		queue.addFirst(new IntPair(nowX, nowY));
		visited[nowX][nowY] = false;
		while (!queue.isEmpty()) {
			IntPair pair = queue.getFirst();
			queue.removeFirst();
			int x = pair.x;
			int y = pair.y;
			int depth = pair.depth;

			if (x == resultX && y == resultY) {
				return depth;
			}

			if (x > 0 && y > 1 && !visited[x - 1][y - 2]) {
				visited[x - 1][y - 2] = true;
				queue.add(new IntPair(x - 1, y - 2, depth + 1));
			}
			if (x < l - 1 && y < l - 2 && !visited[x + 1][y + 2]) {
				visited[x + 1][y + 2] = true;
				queue.add(new IntPair(x + 1, y + 2, depth + 1));
			}
			if (x < l - 1 && y > 1 && !visited[x + 1][y - 2]) {
				visited[x + 1][y - 2] = true;
				queue.add(new IntPair(x + 1, y - 2, depth + 1));
			}
			if (x > 0 && y < l - 2 && !visited[x - 1][y + 2]) {
				visited[x - 1][y + 2] = true;
				queue.add(new IntPair(x - 1, y + 2, depth + 1));
			}
			if (x > 1 && y > 0 && !visited[x - 2][y - 1]) {
				visited[x - 2][y - 1] = true;
				queue.add(new IntPair(x - 2, y - 1, depth + 1));
			}
			if (x < l - 2 && y < l - 1 && !visited[x + 2][y + 1]) {
				visited[x + 2][y + 1] = true;
				queue.add(new IntPair(x + 2, y + 1, depth + 1));
			}
			if (x > 1 && y < l - 1 && !visited[x - 2][y + 1]) {
				visited[x - 2][y + 1] = true;
				queue.add(new IntPair(x - 2, y + 1, depth + 1));
			}
			if (x < l - 2 && y > 0 && !visited[x + 2][y - 1]) {
				visited[x + 2][y - 1] = true;
				queue.add(new IntPair(x + 2, y - 1, depth + 1));
			}
		}
		return -1;
	}

	public static void main(String[] args) {
		int t = scanner.nextInt();
		for (int i = 0; i < t; i++) {
			int l = scanner.nextInt();
			int nowX = scanner.nextInt();
			int nowY = scanner.nextInt();
			int resultX = scanner.nextInt();
			int resultY = scanner.nextInt();
			System.out.println(getBfsResult(l, nowX, nowY, resultX, resultY));
		}
	}
}
