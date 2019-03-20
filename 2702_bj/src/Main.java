import java.util.Scanner;

public class Main {
	private static int getGcd(int left, int right) {
		return (right == 0) ? left : getGcd(right, left % right);
	}

	private static int getLcm(int left, int right) {
		int tmpLeft = left;
		int tmpRight = right;
		while(tmpLeft != tmpRight) {
			if (tmpLeft > tmpRight) {
				tmpRight += right;
			} else {
				tmpLeft += left;
			}
		}
		return tmpLeft;
	}

	private static Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		int T = scanner.nextInt();
		for (int i = 0; i < T; i++) {
			int left = scanner.nextInt();
			int right = scanner.nextInt();
			System.out.println(getLcm(left, right) + " " + getGcd(left, right));
		}
	}
}
