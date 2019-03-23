import java.util.ArrayList;
		import java.util.List;
		import java.util.Scanner;

class Pair {
	int age;
	String name;
	Pair(int age, String name) {
		this.age = age;
		this.name = name;
	}
}

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scanner.nextInt();
		List<Pair> pairs = new ArrayList<>(n);
		for (int i = 0; i < n; i++) {
			Pair pair = new Pair(scanner.nextInt(), scanner.next());
			pairs.add(pair);
		}
		pairs.sort((Pair left, Pair right) -> {
			return left.age - right.age;
		});

		for (Pair pair : pairs) {
			System.out.println(pair.age + " " + pair.name);
		}
	}
}
