import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int m = Integer.valueOf(scanner.nextLine());
		String[] rawInputs = scanner.nextLine().split(" ");
		int length = rawInputs.length;
		double[] inputs = new double[length];
		int[] result = new int[m];

		/* Initialize */
		for(int i = 0; i < m; i++) {
			result[i] = 0;
		}

		for(int i = 0; i < length; i++) {
			inputs[i] = Double.valueOf(rawInputs[i]);
		}

		Double
	}
}