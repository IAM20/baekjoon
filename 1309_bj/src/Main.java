import java.util.Scanner;

class Dp {
	int zero;
	int left;
	int right;
	Dp (int zero, int left, int right) {
		this.zero = zero;
		this.left = left;
		this.right = right;
	}
}

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	private static final int REMAINDER = 9901;

	public static void main(String[] args) {
		int n = scanner.nextInt();
		Dp[] dps = new Dp[n];
		dps[0] = new Dp(1, 1, 1);
		int zero, left, right;
		for (int i = 1; i < n; i++) {
			zero = (dps[i - 1].zero + dps[i - 1].left + dps[i - 1].right) % REMAINDER;
			left = (dps[i - 1].zero + dps[i - 1].right) % REMAINDER;
			right = (dps[i - 1].zero + dps[i - 1].left) % REMAINDER;
			dps[i] = new Dp(zero, left, right);
		}
		System.out.println((dps[n - 1].left + dps[n - 1].right + dps[n - 1].zero) % REMAINDER);
	}
}
