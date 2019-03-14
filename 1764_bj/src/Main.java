import java.io.*;
import java.util.*;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) throws IOException {
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		Map<String, Integer> hashMap = new HashMap<>();
		List<String> result = new ArrayList<>();

		for (int i = 0; i < n; i++) {
			String whoAreYou = scanner.next();
			hashMap.put(whoAreYou, 1);
		}
		for (int j = 0; j < m; j++) {
			String whoAreYou = scanner.next();
			Integer a = hashMap.get(whoAreYou);
			if (a != null) {
				result.add(whoAreYou);
			}
		}
		result.sort(Comparator.naturalOrder());
		System.out.println(result.size());
		for (String name : result) {
			System.out.println(name);
		}
	}
}
