import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class IntPair {
	int x;
	int y;
	IntPair(int x, int y) {
		this.x = x;
		this.y = y;
	}
	@Override
	public String toString() {
		return x + " " + y;
	}
}

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scanner.nextInt();
		List<IntPair> list = new ArrayList<>();
		for (int i = 0; i < n; i++) {
			int x = scanner.nextInt();
			int y = scanner.nextInt();
			list.add(new IntPair(x, y));
		}
		list.sort((IntPair left, IntPair right) -> {
			if (left.x == right.x) {
				return left.y - right.y;
			} else {
				return left.x - right.x;
			}
		});
		for (IntPair pair : list) {
			System.out.println(pair.toString());
		}
	}
}
