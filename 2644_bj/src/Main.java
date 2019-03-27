import java.util.*;

class Pair {
	int number;
	int chon;
	Pair(int number, int chon) {
		this.number = number;
		this.chon = chon;
	}
}

public class Main {
	private static final Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int humanNumber = scanner.nextInt();
		int leftNumber = scanner.nextInt();
		int rightNumber = scanner.nextInt();

		ArrayList<ArrayList<Integer>> lists = new ArrayList<>(humanNumber + 1);
		for (int i = 0; i < humanNumber + 1; i++) {
			lists.add(new ArrayList<>());
		}
		int n =  scanner.nextInt();
		int left, right;
		for (int i = 0; i < n; i++) {
			left = scanner.nextInt();
			right = scanner.nextInt();
			lists.get(left).add(right);
			lists.get(right).add(left);
		}

		boolean[] booleans = new boolean[humanNumber + 1];
		for (boolean bool : booleans) {
			bool = false;
		}

		Queue<Pair> queue = new ArrayDeque<>();
		queue.add(new Pair(leftNumber, 0));
		booleans[leftNumber] = true;
		boolean flag = false;
		int result = -1;

		while (!queue.isEmpty()) {
			Pair pair = queue.remove();
			int number = pair.number;
			int chon = pair.chon;

			List<Integer> edges = lists.get(number);
			for (Integer human : edges) {
				if (booleans[human]) continue;
				if (human == rightNumber) {
					result = chon + 1;
					flag = true;
					break;
				}
				queue.add(new Pair(human, chon + 1));
				booleans[human] = true;
			}
			if (flag) break;
		}
		System.out.println(result);
	}
}
