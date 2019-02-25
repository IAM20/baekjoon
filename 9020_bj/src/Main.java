import java.util.Scanner;

public class Main {
    private static boolean[] eratosNet(int length) {
        boolean[] isPrimeNumber = new boolean[length + 1];

        for(int i = 0; i <= length; i++) {
            isPrimeNumber[i] = true;
        }

        isPrimeNumber[0] = isPrimeNumber[1] = false;
        for(int i = 2; i * i <= length; i++) {
            if (isPrimeNumber[i]) {
                for(int j = i + i; j <= length; j += i) {
                    isPrimeNumber[j] = false;
                }
            }
        }

        return isPrimeNumber;
    }

    private static int getNextLeft(int now, boolean[] isPrimeNumber) {
        int result = now - 1;
        while(!isPrimeNumber[result]) {
            if(result == 1) {
                return -1;
            }
            result--;
        }
        return result;
    }

    private static int getNextRight(int now, boolean[] isPrimeNumber) {
        int length = isPrimeNumber.length;
        int result = now + 1;
        while(!isPrimeNumber[result]) {
            if(result == length - 1) {
                return -1;
            }
            result++;
        }
        return result;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        boolean[] isPrimeNumber = eratosNet(10000);
        int T; int n;
        T = scanner.nextInt();
        for(int i = 0; i < T; i++) {
            n = scanner.nextInt();
            int left = getNextLeft(n / 2 + 1, isPrimeNumber);
            int right = getNextRight( n / 2 - 1, isPrimeNumber);

            while(true) {
                if(left == -1 || right == -1) {
                    break;
                }
                if(left + right == n) {
                    System.out.println(left + " " + right);
                    break;
                } else if(left + right < n) {
                    right = getNextRight(right, isPrimeNumber);
                } else {
                    left = getNextLeft(left, isPrimeNumber);
                }
            }
        }
    }
}
