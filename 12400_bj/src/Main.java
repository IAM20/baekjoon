import java.util.HashMap;
import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	private static String decode(String str) {
		int length = str.length();
		StringBuilder buf = new StringBuilder(length);
		for (int i = 0; i < length; i++) {
			char ch = str.charAt(i);
			switch (ch)
			{
				case 'a': ch = 'y';
					break;
				case 'b': ch = 'h';
					break;
				case 'c': ch = 'e';
					break;
				case 'd': ch = 's';
					break;
				case 'e': ch = 'o';
					break;
				case 'f': ch = 'c';
					break;
				case 'g': ch = 'v';
					break;
				case 'h': ch = 'x';
					break;
				case 'i': ch = 'd';
					break;
				case 'j': ch = 'u';
					break;
				case 'k': ch = 'i';
					break;
				case 'l': ch = 'g';
					break;
				case 'm': ch = 'l';
					break;
				case 'n': ch = 'b';
					break;
				case 'o': ch = 'k';
					break;
				case 'p': ch = 'r';
					break;
				case 'q': ch = 'z';
					break;
				case 'r': ch = 't';
					break;
				case 's': ch = 'n';
					break;
				case 't': ch = 'w';
					break;
				case 'u': ch = 'j';
					break;
				case 'v': ch = 'p';
					break;
				case 'w': ch = 'f';
					break;
				case 'x': ch = 'm';
					break;
				case 'y': ch = 'a';
					break;
				case 'z': ch = 'q';
					break;
				default :
			}
			buf.append(ch);
		} return buf.toString();
	}
	public static void main(String[] args) {
		int t = Integer.parseInt(scanner.nextLine());
		for (int i = 0; i < t; i++) {
			String password = scanner.nextLine();
			System.out.println("Case #" + (i + 1) + ": " + decode(password));
		}
	}
}
