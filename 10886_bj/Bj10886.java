import java.util.Scanner;

public class Bj10886 {
    public static final String cute = "Junhee is cute!";
    public static final String not_cute = "Junhee is not cute!";

    public static void main(String[] args) {
        int _false = 0;
        int _true = 0;
        int n;

        Scanner buf = new Scanner(System.in);
        n = buf.nextInt();

        for(int i = 0; i < n; i++) {
            switch(buf.nextInt()) {
                case 0:
                    _false++;
                    break;
                case 1:
                    _true++;
                    break;
                default:
                    break;
            }
        }
        if(_true > _false) {
            System.out.println(cute);
        } else
            System.out.println(not_cute);
    }
}
