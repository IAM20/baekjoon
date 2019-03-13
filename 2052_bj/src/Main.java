import java.math.BigInteger;
import java.util.Scanner;


public class Main {
	private static int getSpace(BigInteger bigInteger) {
		int result = 0;
		while(!bigInteger.toString().equals("0")) {
			bigInteger = bigInteger.divide(BigInteger.TEN);
			result++;
		}
		return result;
	}

	private static BigInteger result = BigInteger.ONE;
	private static Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		int loopCount = scanner.nextInt();
		System.out.print("0.");
		for (int i = 0; i < loopCount; i++) {
			result = result.multiply(BigInteger.valueOf(5));
		}
		int space = getSpace(result);
		for (int i = 0; i < loopCount - space; i++) {
			System.out.print("0");
		}
		System.out.println(result.toString());
	}
}
