import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/*2 or 6*/
class Data {
	int head;
	List<Integer> teeth;
	Data(int head) {
		this.head = head;
		teeth = new ArrayList<>(8);
	}
	int getRightTooth() {
		return teeth.get((head + 2) % 8);
	}
	int getLeftTooth() {
		return teeth.get((head + 6) % 8);
	}
	void rotate(int direct) {
		if (direct == 1) {
			clockRotate();
		} else {
			reverseClockRotate();
		}
	}
	private void reverseClockRotate() {
		++head;
		head %= 8;
	}
	private void clockRotate() {
		--head;
		if (head < 0) {
			head = 7;
		}
	}
	public int getHead() {
		return teeth.get(head);
	}
	void print() {
		for(int i = 0; i < 8; i++) {
			System.out.print(teeth.get((i + head) % 8));
		} System.out.println();
	}
}

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		List<Data> datas = new ArrayList<>();

		for (int i = 0; i < 4; i++) {
			datas.add(new Data(0));
			String str = scanner.next();
			char[] strChars = str.toCharArray();
			for (char ch : strChars) {
				if (ch == '1') {
					datas.get(i).teeth.add(1);
				} else {
					datas.get(i).teeth.add(0);
				}
			}
		}
		int n = scanner.nextInt();
		Data first = datas.get(0);
		Data second = datas.get(1);
		Data third = datas.get(2);
		Data fourth = datas.get(3);
		for (int i = 0; i < n; i++) {
			int where = scanner.nextInt();
			int how = scanner.nextInt();
			int reverseHow = (how == 1) ? -1 : 1;
			int fRight = first.getRightTooth();
			int sLeft = second.getLeftTooth();
			int sRight = second.getRightTooth();
			int tLeft = third.getLeftTooth();
			int tRight = third.getRightTooth();
			int foLeft = fourth.getLeftTooth();
			switch (where) {
				case 1:
					first.rotate(how);
					if (fRight != sLeft) {
						second.rotate(reverseHow);
						if (sRight != tLeft) {
							third.rotate(how);
							if (tRight != foLeft) {
								fourth.rotate(reverseHow);
							}
						}
					}
					break;
				case 2:
					second.rotate(how);
					if (sRight != tLeft) {
						third.rotate(reverseHow);
						if (tRight != foLeft) {
							fourth.rotate(how);
						}
					}
					if (fRight != sLeft) {
						first.rotate(reverseHow);
					}
					break;
				case 3:
					third.rotate(how);
					if (tRight != foLeft) {
						fourth.rotate(reverseHow);
					}
					if (sRight != tLeft) {
						second.rotate(reverseHow);
						if (sLeft != fRight) {
							first.rotate(how);
						}
					}
					break;
				case 4:
					fourth.rotate(how);
					if (foLeft != tRight) {
						third.rotate(reverseHow);
						if (sRight != tLeft) {
							second.rotate(how);
							if (fRight != sLeft) {
								first.rotate(reverseHow);
							}
						}
					}
					break;
			}
		}
		int result = 0;
		if (first.getHead() == 1) {
			result += 1;
		}
		if (second.getHead() == 1) {
			result += 2;
		}
		if (third.getHead() == 1) {
			result += 4;
		}
		if (fourth.getHead() == 1) {
			result += 8;
		}
		System.out.println(result);
	}
}
