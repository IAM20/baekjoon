import java.util.Scanner;

public class Main {
	private static final int NORTH = 0;
	private static final int EAST = 1;
	private static final int SOUTH = 2;
	private static final int WEST = 3;

	private static int direction;
	private static boolean[][] visited = new boolean[50][50];
	private static int[][] matrix = new int[50][50];
	private static int n;
	private static int m;

	private static int rotate(int direction) {
		if (NORTH == direction) {
			return WEST;
		} else return direction - 1;
	}

	private static boolean canContinue(int x, int y) {
		switch (direction) {
			case NORTH:
				return ((matrix[x + 1][y] == 1) && visited[x - 1][y] && visited[x][y + 1] && visited[x][y - 1]);
			case SOUTH:
				return ((matrix[x - 1][y] == 1) && visited[x + 1][y] && visited[x][y + 1] && visited[x][y - 1]);
			case EAST:
				return ((matrix[x][y - 1] == 1) && visited[x - 1][y] && visited[x + 1][y] && visited[x][y + 1]);
			case WEST:
				return ((matrix[x][y + 1] == 1) && visited[x - 1][y] && visited[x + 1][y] && visited[x][y - 1]);
			default:
				return false;
		}
	}

	private static boolean mustBack(int x, int y) {
		switch (direction) {
			case NORTH:
				return ((matrix[x + 1][y] != 1) && visited[x - 1][y] && visited[x + 1][y] && visited[x][y + 1] && visited[x][y - 1]);
			case SOUTH:
				return ((matrix[x - 1][y] != 1) && visited[x + 1][y] && visited[x - 1][y] && visited[x][y + 1] && visited[x][y - 1]);
			case EAST:
				return ((matrix[x][y - 1] != 1) && visited[x - 1][y] && visited[x + 1][y] && visited[x][y + 1] && visited[x][y - 1]);
			case WEST:
				return ((matrix[x][y + 1] != 1) && visited[x - 1][y] && visited[x + 1][y] && visited[x][y - 1] && visited[x][y + 1]);
			default:
				return false;
		}
	}

	private static void bfs(int x, int y) {
		int nowX = x;
		int nowY = y;
		int result = 1;
		visited[nowX][nowY] = true;

		while(!canContinue(nowX, nowY)) {
			int cnt = 0;
			boolean flag = true;
			if (mustBack(nowX, nowY)) {
				switch (direction) {
					case NORTH:
						nowX++;
						break;
					case SOUTH:
						nowX--;
						break;
					case EAST:
						nowY--;
						break;
					case WEST:
						nowY++;
						break;
				}
				continue;
			}

			while (cnt < 4 && flag) {
				direction = rotate(direction);
				cnt++;
				switch (direction) {
					case NORTH:
						if (!visited[nowX - 1][nowY]) {
							visited[--nowX][nowY] = true;
							result++;
							flag = false;
						}
						break;
					case SOUTH:
						if (!visited[nowX + 1][nowY]) {
							visited[++nowX][nowY] = true;
							result++;
							flag = false;
						}
						break;
					case EAST:
						if (!visited[nowX][nowY + 1]) {
							visited[nowX][++nowY] = true;
							result++;
							flag = false;
						}
						break;
					case WEST:
						if (!visited[nowX][nowY - 1]) {
							visited[nowX][--nowY] = true;
							result++;
							flag = false;
						}
						break;
					default:
						break;
				}
			}
		}
		System.out.println(result);
	}

	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		n = scanner.nextInt();
		m = scanner.nextInt();
		int nowX = scanner.nextInt();
		int nowY = scanner.nextInt();
		direction = scanner.nextInt();

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matrix[i][j] = scanner.nextInt();
				visited[i][j] = (matrix[i][j] == 1);
			}
		}
		bfs(nowX, nowY);
	}
}
