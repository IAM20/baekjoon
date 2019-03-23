import java.util.Calendar;
import java.util.Scanner;

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int hour = scanner.nextInt();
		int minute = scanner.nextInt();
		int seconds = scanner.nextInt();
		int requiredSeconds = scanner.nextInt();

		Calendar calendar = new Calendar.Builder().setTimeOfDay(hour, minute, seconds).build();
		calendar.add(Calendar.SECOND, requiredSeconds);
		int afterHour = calendar.get(Calendar.HOUR_OF_DAY);
		int afterMinute = calendar.get(Calendar.MINUTE);
		int afterSeconds = calendar.get(Calendar.SECOND);

		System.out.println(afterHour + " " + afterMinute + " " + afterSeconds);
	}
}
