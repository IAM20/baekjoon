	import java.util.Scanner;

	public class Main {

		public static final Scanner scanner = new Scanner(System.in);

		public static int X;
		public static int Y;
		public static boolean[] visited = new boolean[128];

		public static void init() {
			for(int i = 0; i < 128; i++) {
				visited[i] = false;
			}
		}

		public static boolean isDup(char ch) {
			return visited[ch];
		}

		public static int dfs(char[][] matrix, int startX, int startY, int buf) {

			int leftRetval, rightRetval, upRetval, belowRetval;

			char ch = matrix[startY][startX];

			if(ch == '1' || isDup(ch)) {
				return buf;
			}

			visited[ch] = true;
			matrix[startY][startX] = '1';

			leftRetval = rightRetval = upRetval = belowRetval = buf + 1;

			if(startX < X - 1) {
				if(matrix[startY][startX + 1] != '1' && !isDup(matrix[startY][startX+1]))
					leftRetval = dfs(matrix, startX + 1, startY, leftRetval);
			}

			if(startY < Y - 1) {
				if(matrix[startY + 1][startX] != '1' && !isDup(matrix[startY + 1][startX]))
					upRetval = dfs(matrix, startX, startY + 1, upRetval);
			}

			if(startY > 0) {
				if(matrix[startY - 1][startX] != '1' && !isDup(matrix[startY - 1][startX]))
					belowRetval = dfs(matrix, startX, startY - 1, belowRetval);
			}

			if(startX > 0) {
				if(matrix[startY][startX - 1] != '1' && !isDup(matrix[startY][startX - 1]))
					rightRetval = dfs(matrix, startX - 1, startY, rightRetval);
			}

			matrix[startY][startX] = ch;
			visited[ch] = false;

			if(leftRetval > upRetval && leftRetval > belowRetval && leftRetval > rightRetval)
				return leftRetval;
			else if(rightRetval > upRetval && rightRetval > belowRetval)
				return rightRetval;
			else if(belowRetval > upRetval)
				return belowRetval;
			else
				return upRetval;
		}

		public static void main(String[] args) {
			Y = scanner.nextInt();
			X = scanner.nextInt();
			init();

			char matrix[][] = new char[Y][X];

			for(int i = 0; i < Y; i++) {
				matrix[i] = scanner.next().toCharArray();
			}

			int buf = 0;

			buf = dfs(matrix, 0, 0, buf);
			System.out.println(buf);

		}
	}


