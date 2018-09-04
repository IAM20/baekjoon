import javafx.util.Pair;
import java.util.*;

public class Main {

    public static final int HERE = 1;
    public static int matrix[][] = new int[50][50];
    public static final Scanner scanner = new Scanner(System.in);

    public static List<Pair<Integer, Integer>> list;
    public static int n;
    public static int m;

    public static void dfs(int startX, int startY) {
        matrix[startX][startY] = 0;
        for(Pair<Integer, Integer> pair : list) {
            if(pair.getKey() == startX && pair.getValue() == startY) {
                list.remove(pair);
                break;
            }
        }

        if(startX != 0) {
            if(matrix[startX - 1][startY] == HERE) {
                dfs(startX - 1, startY);
            }
        }
				if(startX != m - 1) {
					if(matrix[startX + 1][startY] == HERE) {
							dfs(startX + 1, startY);
					}
				}
        if(startY != 0) {
            if(matrix[startX][startY - 1] == HERE) {
                dfs(startX, startY - 1);
            }
        }
        if(startY != n - 1) {
            if(matrix[startX][startY + 1] == HERE) {
                dfs(startX, startY +1);
            }
        }
    }

    public static void main(String[] args) {
        int t, k, x, y;
        int result = 0;

        t = scanner.nextInt();
        list = new ArrayList();

        for(int times = 0; times < t; times++) {
            m = scanner.nextInt();
            n = scanner.nextInt();
            k = scanner.nextInt();

            for(int i = 0; i < k; i++) {
                x = scanner.nextInt();
                y = scanner.nextInt();

                matrix[x][y] = HERE;
                list.add(new Pair<Integer, Integer>(x, y));
            }
            while(!list.isEmpty()) {
                result++;
                int startX = list.get(0).getKey();
                int startY = list.get(0).getValue();
                dfs(startX, startY);
            }
            System.out.println(result);
            result = 0;
        }
    }
}
