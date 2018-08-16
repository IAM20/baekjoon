import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n, value;
		n = scanner.nextInt();
		value = scanner.nextInt();
		int[] arr = new int[n];
		for(int i = 0; i < n; i++) {
			arr[i] = scanner.nextInt();
		}

		int result = 0;
		int iter = n - 1;
		while(value != 0) {
			if(arr[iter] <= value) {
				result++;
				value -= arr[iter];
			} else iter--;
		}
		System.out.println(result);
	}
}

