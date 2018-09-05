import javafx.util.Pair;
import java.util.*;


public class Main {

    public static final int HERE = 1;

    public static int flag = 0;
    public static int matrix[][] = new int[26][26];
    public static int result[][] = new int[26][26];
    public static int resultArr[] = new int[25 * 25 + 1];
    public static final Scanner scanner = new Scanner(System.in);

    public static List<Pair<Integer, Integer>> list;
    public static int n;

    public static void dfs(int startX, int startY) {
        matrix[startX][startY] = 0;
        result[startX][startY] = flag;
        for(Pair<Integer, Integer> pair : list) {
            if(pair.getKey() == startX && pair.getValue() == startY) {
                list.remove(pair);
                resultArr[flag]++;
                break;
            }
        }

        if(startX != 0) {
            if(matrix[startX - 1][startY] == HERE) {
                dfs(startX - 1, startY);
            }
        }
        if(matrix[startX + 1][startY] == HERE) {
            dfs(startX + 1, startY);
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
        list = new ArrayList();

        n = scanner.nextInt();

        for(int i = 0; i < n; i++) {

            char[] str = scanner.next().toCharArray();
            for(int j = 0; j < n; j++) {
                matrix[i][j] = str[j] - 48;
                if(matrix[i][j] == 1) {
                    list.add(new Pair<Integer, Integer>(i, j));
                }
            }
        }
        while(!list.isEmpty()) {
            flag++;
            int startX = list.get(0).getKey();
            int startY = list.get(0).getValue();
            dfs(startX, startY);
        }
        System.out.println(flag);
        Arrays.sort(resultArr);
        for(int i = 25 * 25 - flag + 1; i <= 25 * 25; i++) {
            System.out.println(resultArr[i]);
        }
    }
}
