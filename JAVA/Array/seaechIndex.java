
import java.util.*;

public class seaechIndex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int arr[] = new int[n];

        for(int i = 0 ; i < n ; i++ ){
            arr[i] = sc.nextInt();
        }


        System.out.println("Enter the key");

        int key = sc.nextInt();

        for(int i = 0 ; i < n ; i++ ){
            if(arr[i] == key){
                System.out.println(i);
                break;
            }
        }
    }
}
