import java.util.PriorityQueue;
import java.util.Scanner;

class Pair {
	int x;
	int y;
	Pair(int x, int y) {
		this.x = x;
		this.y = y;
	}
}

class PairDistance {
	Pair vertex;
	int distance;
	PairDistance(Pair vertex, int distance) {
		this.vertex = vertex;
		this.distance = distance;
	}
}

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	private static int[][] direction = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
	public static void main(String[] args) {
		int count = 1;
		while (true) {
			int n = scanner.nextInt();
			if (n == 0) {
				break;
			}
			int[][] matrix = new int[n][n];
			int[][] distance = new int[n][n];

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					matrix[i][j] = scanner.nextInt();
					distance[i][j] = Integer.MAX_VALUE;
				}
			}
			distance[0][0] = matrix[0][0];

			PriorityQueue<PairDistance> queue = new PriorityQueue<>((PairDistance l, PairDistance r) -> {
				return l.distance - r.distance;
			});

			queue.add(new PairDistance(new Pair(0, 0), matrix[0][0]));
			boolean flag = false;

			while (true) {
				PairDistance pairDistance = queue.remove();
				int x = pairDistance.vertex.x;
				int y = pairDistance.vertex.y;

				for (int i = 0; i < 4; i++) {
					int tmpX = x + direction[i][0];
					int tmpY = y + direction[i][1];
					if (tmpX < 0 || tmpY < 0 || tmpX > n - 1 || tmpY > n - 1) {
						continue;
					}
					if (distance[x][y] + matrix[tmpX][tmpY] < distance[tmpX][tmpY]) {
						distance[tmpX][tmpY] = distance[x][y] + matrix[tmpX][tmpY];
						if (tmpX == n - 1 && tmpY == n - 1) {
							flag = true;
							break;
						}
						PairDistance pd = new PairDistance(new Pair(tmpX, tmpY), distance[tmpX][tmpY]);
						queue.add(pd);
					}
				}
				if (flag) {
					break;
				}
			}
			System.out.println("Problem " + count++ + ": " +distance[n - 1][n - 1]);
		}
	}
}
