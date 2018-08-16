import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static BigInteger iterFibo(int n) {
		BigInteger b4 = BigInteger.valueOf(1), b4b4 = BigInteger.valueOf(1), result = BigInteger.ZERO;
		switch(n) {
			case 0:
				return BigInteger.ZERO;
			case 1:
				return BigInteger.ONE;
			case 2:
				return BigInteger.ONE;
			default:
				for (int i = 3; i <= n; i++) {
					result = b4.add(b4b4);
					b4b4 = b4;
					b4 = result;
				}
				return result;
		}
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println(iterFibo(scanner.nextInt()));
	}
}
