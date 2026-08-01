import java.util.*;

public class IfElse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        // if (a > 18) {
        //     System.out.println("you are Adult");
        // } else if (a < 18) {
        //     System.out.println("you are Tenger");
        // } else {
        //     System.out.println("you are child");
        // }

        // if(a % 2 == 0){
        //     System.out.println("Even Number");
        // }
        // else{
        //     System.out.println("Odd Number");
        // }

        if(a == b){
            System.out.println("Both are equal");
        }
        else if(a<b){
            System.out.println("A is lesser");
        }
        else{
            System.out.println("A is Greater");
        }
        



    }
}
