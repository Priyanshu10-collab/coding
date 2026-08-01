import java .util.*;
public class loops {
    public static void main(String[] args) {
        // int i = 0;
        // while(i < 10){
        //     System.out.println(i);
        //     i++;
        // }

        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int sum = 0 ;
        for(int i = 0 ; i <= a ; i++){
            sum += i;
        }

        System.out.println(sum);
    }
}
