import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scanner.nextInt();
		int k = scanner.nextInt();
		boolean[] eratos = new boolean[n + 1];
		for (int i = 0; i <= n; i++) {
			eratos[i] = true;
		} eratos[0] = eratos[1] = false;
		int cnt = 0;
		for (int j = 2; j <= n; j++) {
			if (eratos[j]) {
				cnt++;
				if (cnt == k) {
					System.out.println(j);
					System.exit(0);
				}
				for (int l = j + j; l <= n; l += j) {
					if (eratos[l]) {
						eratos[l] = false;
						cnt++;
					}
					if (cnt == k) {
						System.out.println(l);
						System.exit(0);
					}
				}
			}
		}

	}
}
