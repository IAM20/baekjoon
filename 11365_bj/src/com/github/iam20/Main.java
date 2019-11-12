package com.github.iam20;

import java.util.Scanner;

public class Main {
	private static final Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		for(;;) {
			String str = scanner.nextLine();
			if (str.equals("END")) {
				break;
			} else {
				int length = str.length();
				for (int i = length - 1; i >= 0; i--) {
					System.out.print(str.charAt(i));
				} System.out.println();
			}
		}
	}
}
