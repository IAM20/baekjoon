import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String str = scanner.next();

        String regex= "(\\d+):(\\d+):(\\d+)";

        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(str);

        matcher.find();
        int a[] = new int[3];
        for(int i = 0; i < 3; i++) a[i] = 0;

        for(int i = 1; i <= 3; i++) {
            int temp = Integer.parseInt(matcher.group(i));
            if(temp <= 12 && temp >= 1) {
                a[1]++;
            } else if(temp <= 60) {
                a[2]++;
            } else {
                a[0]++;
            }
        }

        int result = 0;

        if(a[0] > 0 || a[1] == 0) {
            result = 0;
        } else {
            switch(a[1]) {
                case 1:
                    result = 2;
                    break;
                case 2:
                    result = 4;
                    break;
                case 3:
                    result = 6;
            }
        }

        System.out.println(result);
    }
}
