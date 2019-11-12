import java.util.Scanner;

public class Main {
	private static final Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		String str = scanner.nextLine();
		System.out.println(rot13(str));
	}

	private static char encrypt(char ch) {
		if (ch >= 'a' && ch <= 'z') {
			ch += 13;
			if (ch > 'z') {
				ch %= 'z';
				ch += 'a' - 1;
			}
		} else if (ch >= 'A' && ch <= 'Z') {
			ch += 13;
			if (ch > 'Z') {
				ch %= 'Z';
				ch += 'A' - 1;
			}
		} return ch;
	}

	private static String rot13(String str) {
		int length = str.length();
		StringBuilder buf = new StringBuilder(length);
		for (int i = 0; i < length; i++) {
			char ch = str.charAt(i);
			buf.append(encrypt(ch));
		}
		return buf.toString();
	}
}
