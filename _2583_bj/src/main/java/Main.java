import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static final Scanner scanner = new Scanner(System.in);
	/**
	 * Author game9777@naver.com
	 */

	public static final int YES = 1;
	public static final int NO = 0;

	public static int M;
	public static int N;
	public static int K;

	public static int dfs(int[][] matrix, int startPointX, int startPointY) {

		if(matrix[startPointX][startPointY] == YES) {
			return 0;
		}

		matrix[startPointX][startPointY] = YES;

		int retval = 1;

		int leftRetval, rightRetval, belowRetval, upRetval;
		leftRetval = rightRetval = belowRetval = upRetval = 0;
		if(startPointX < N - 1) {
			if (matrix[startPointX + 1][startPointY] == NO) {
				leftRetval += dfs(matrix, startPointX + 1, startPointY);
			}
		}

		if(startPointX > 0) {cd
			if (matrix[startPointX - 1][startPointY] == NO) {
				rightRetval += dfs(matrix, startPointX -1, startPointY);
			}
		}

		if(startPointY < M - 1) {
			if(matrix[startPointX][startPointY + 1] == NO) {
				upRetval += dfs(matrix, startPointX, startPointY + 1);
			}
		}

		if(startPointY > 0) {
			if(matrix[startPointX][startPointY - 1] == NO) {
				upRetval += dfs(matrix, startPointX, startPointY - 1);
			}
		}

		return retval + leftRetval + rightRetval + upRetval + belowRetval;
	}

	public static void main(String[] args) {
		M = scanner.nextInt();
		N = scanner.nextInt();
		K = scanner.nextInt();

		int matrix[][] = new int[N][M];

		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				matrix[i][j] = NO;
			}
		}

		int remain = N * M;

		int a, b, c, d;
		for(int i = 0; i < K; i++) {
			a = scanner.nextInt();
			b = scanner.nextInt();
			c = scanner.nextInt();
			d = scanner.nextInt();
			for(int k = a; k < c; k++) {
				for(int l = b; l < d; l++) {
					if(matrix[k][l] == NO) {
						matrix[k][l] = YES;
						remain--;
					}
				}
			}
		}

		int size = 0;
		int cnt = 0;
		int array[] = new int[N * M];

		while(remain != 0) {
			for(int i = 0; i < N; i++) {
				for(int j = 0; j < M; j++) {
					array[size] = dfs(matrix, i, j);
					if(array[size] == 0) {
						continue;
					}
					cnt++;
					remain -= array[size++];
				}
			}
		}
		Arrays.sort(array);
		System.out.println(cnt);
		for(int i = N * M - cnt; i < N * M; i++) {
			System.out.print(array[i] + " ");
		}System.out.println();
	}
}
