import java.util.*;

class Pair {
	int left;
	int right;
	Pair(int left, int right) {
		this.left = left;
		this.right = right;
	}
}

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	private static boolean isThereHigher(int[] arr, int start) {
		for (int i = start + 1; i < 10; i++) {
			if(arr[i] != 0) return true;
		} return false;
	}
	public static void main(String[] args) {
		int t = scanner.nextInt();
		for(int i = 0; i < t; i++) {
			int n = scanner.nextInt();
			int m = scanner.nextInt();
			int[] arr= new int[10];
			for(int j = 0; j < 10; j++) {
				arr[j] = 0;
			}

			Queue<Pair> queue = new ArrayDeque<>();
			for(int j = 0; j < n; j++) {
				int tmp = scanner.nextInt();
				queue.add(new Pair(j, tmp));
				arr[tmp]++;
			}

			int j = 0;
			while(!queue.isEmpty()) {
				Pair pair = queue.remove();
				int left = (pair == null) ? 0 : pair.left;
				int right = (pair == null) ? -1 : pair.right;
				if (isThereHigher(arr, right)) {
					queue.add(pair);
					continue;
				} else {
					j++;
					arr[right]--;
				}
				if (left == m) {
					System.out.println(j);
					break;
				}
			}
		}
	}
}
