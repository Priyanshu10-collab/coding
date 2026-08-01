import java.util.*;

public class printNames {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();

        String names[] = new String[size];

        for (int i = 0; i < names.length; i++) {
            names[i] = sc.next();
        }

        for (int j = 0; j < names.length; j++) {
            System.out.println(names[j]);
        }
    }
}
