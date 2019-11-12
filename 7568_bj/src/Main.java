import java.util.List;
import java.util.Scanner;

class Size {
	public static final int BIGGER = 0;
	public static final int SMALLER = 1;
	public static final int MID = 2;

	private int height;
	private int weight;

	public Size(int weight, int height) {
		this.weight = weight;
		this.height = height;
	}

	public int getHeight() {
		return height;
	}

	public int getWeight() {
		return weight;
	}

	public int isBiggerThan(Size size) {
		if (size.height < height) {
			if (size.weight < weight) {
				return BIGGER;
			} else {
				return MID;
			}
		} else {
			if (size.weight > weight) {
				return SMALLER;
			} else {
				return MID;
			}
		}
	}
}

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int t = scanner.nextInt();

		List<Size>


		for (int i = 0; i < t; i++) {

		}

	}
}
