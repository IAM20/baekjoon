import java.util.Scanner;

public class Main {
	private static final Scanner scanner = new Scanner(System.in);
	private static int n;
	private static int l;
	private static int result = 0;
	private static int[][] matrix;

	public static void main(String[] args) {
		n = scanner.nextInt();
		l = scanner.nextInt();
		matrix = new int[n][n];
		int now;
		boolean isL = false;
		boolean flag = false;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				matrix[i][j] = scanner.nextInt();
			}
		}

		/* Vertical */
		for (int i = 0; i < n; i++) {
			flag = true;
			isL = false;
			now = 0;
			for (int j = 0; j < n - 1 ; j++) {
				switch (Math.abs(matrix[j][i] - matrix[j + 1][i])) {
					case 1:
						if (l == 1) {
							if (matrix[j][i] < matrix[j + 1][i])
								break;
							else if (matrix[j][i] > matrix[j + 1][i] && matrix[j + 2][i] == matrix[j][i] && j < n - 2) {
								flag = false;
								break;
							}
						}
						if (matrix[j][i] < matrix[j + 1][i]) {
							if (isL) {
								isL = false;
							} else {
								flag = false;
							}
							break;
						} else {
							isL = false;
							if (n - (j + 1) >= l) {
								for (int k = 0; k < l - 1; k++) {
									if (matrix[k + j + 1][i] != matrix[k + j + 2][i]) {
										flag = false;
										break;
									}
								} j += l - 1; now = -1;
							} else {
								flag = false;
							}
						} break;
					case 0:
						now++;
						if (l - 1 == now) {
							now = 0;
							isL = true;
						}
						break;
					default:
						flag = false;
				}
				if (!flag) {
					break;
				} else if (flag && j == n - 2) {
					result++;
				}
			}
		}

		/* Horizontal */
		for (int  i = 0; i < n; i++) {
			isL = false;
			flag = true;
			now = 0;
			for (int j = 0; j < n - 1 ; j++) {
				switch (Math.abs(matrix[i][j] - matrix[i][j + 1])) {
					case 1:
						if (l == 1) {
							if (matrix[i][j] < matrix[i][j + 1])
								break;
							else if (matrix[i][j] > matrix[i][j + 1] && matrix[i][j + 2] == matrix[i][j] && j < n - 2) {
								flag = false;
								break;
							}
						}
						if (matrix[i][j] < matrix[i][j + 1]) {
							if (isL) {
								isL = false;
							} else {
								flag = false;
							}
							break;
						} else {
							isL = false;
							if (n - (j + 1) >= l) {
								for (int k = 0; k < l - 1; k++) {
									if (matrix[i][k + j + 1] != matrix[i][k + j + 2]) {
										flag = false;
										break;
									}
								}
								j += l - 1; now = -1;
							} else {
								flag = false;
							}
						}
						break;
					case 0:
						now++;
						if (l - 1 == now) {
							now = 0;
							isL = true;
						}
						break;
					default:
						flag = false;
				}
				if (!flag) {
					break;
				} else if (flag && j == n - 2) {
					result++;
				}
			}
		}
		System.out.println(result);
	}
}
