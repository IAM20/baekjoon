import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		ArrayDeque<Integer> stack = new ArrayDeque<>();
		List<Character> strings = new ArrayList<>();
		stack.addFirst(0);
		int n = scanner.nextInt();
		int now = 1;
		for (int i = 0; i < n; i++) {
			int input = scanner.nextInt();
			if (now <= input) {
				for (int j = now; j <= input; j++) {
					stack.addFirst(now++);
					strings.add('+');
				}
				stack.removeFirst();
				strings.add('-');
			} else if (input == stack.getFirst()){
				stack.removeFirst();
				strings.add('-');
			} else {
				System.out.println("NO");
				System.exit(0);
			}
		}
		for (Character ch : strings) {
			System.out.println(ch);
		}
	}
}
