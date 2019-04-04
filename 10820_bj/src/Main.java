import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	private static final BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	private static final int DIGIT = 0;
	private static final int LOWER_CASE = 1;
	private static final int UPPER_CASE = 2;
	private static final int SPACE = 3;

	private static int classify(char ch) {
		if (ch >= 'A' && ch <= 'Z') {
			return UPPER_CASE;
		} else if (ch >= 'a' && ch <= 'z') {
			return LOWER_CASE;
		} else if (ch == ' ') {
			return SPACE;
		} else if (ch >= '0' && ch <= '9') {
			return DIGIT;
		}
		return -1;
	}

	public static void main(String[] args) throws Exception{
		String str;
		while((str = reader.readLine()) != null) {
			char[] charArr = str.toCharArray();
			int digit = 0;
			int lowerCase = 0;
			int upperCase = 0;
			int space = 0;

			for (char ch : charArr) {
				switch (classify(ch)) {
					case DIGIT:
						digit++;
						break;
					case LOWER_CASE:
						lowerCase++;
						break;
					case UPPER_CASE:
						upperCase++;
						break;
					case SPACE:
						space++;
						break;
					default:
				}
			}
			System.out.println(lowerCase + " " + upperCase + " " + digit + " " + space);
		}
	}
}
