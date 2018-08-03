import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner buf = new Scanner(System.in);
        int m = buf.nextInt();
        int n = buf.nextInt();
        int first = 0;
        int retval = 0;
        int tmp;

        for(int i = m; i <= n; i++) {
            tmp = (int)Math.sqrt(i);
            tmp *= tmp;
            if(tmp == i) {
                retval += i;
                if(first == 0) {
                    first = i;
                }
            }
        }
        if(retval == 0) {
            System.out.println("-1");
            System.exit(0);
        }
        System.out.println(retval);
        System.out.println(first);
    }
}

