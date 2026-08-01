import java.util.*;
public class Pattern {
    public static void main(String[] args) {
        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();

        //Pattern 1
        // for(int i=1; i<a;i++){
        //     for(int j=1; j<a;j++){
        //         System.out.print("*"); 
        //     }
        //     System.out.println();
        // }

        //Pattern 2
        // for(int i=1; i<=4;i++){
        //     for(int j=1; j<=5;j++){
        //         if(i == 1 || j == 1 || i == 4 || j == 5){
        //         System.out.print("*");}
        //         else{
        //         System.out.print(" ");}
        //     }
        //     System.out.println();
        // }

        //Pattern 3

        // for(int i = 1; i <= 5 ; i++){
        //     for(int j = 1; j <= i; j++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        //Pattern 4

        // for(int i = 5; i >= 1 ; i--){
        //     for(int j = 1; j <= i; j++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        //Pattern 5

        for(int  i = 1 ; i < 5 ; i++){
            for(int j = 1 ; j < 5-i ; j++){
                System.out.print(" ");
            }

            for(int j = 0 ; j < i ; j++){
                System.out.print("*");
            }

            System.out.println();
        }

        //Pattern 6

        for(int i = 1 ; i <= 5 ; i++){
            for(int j = 1 ; j <= i ; j++){
                System.out.print(j + " ");
            }
            System.out.println();
        }

        //Pattern 7 

        for(int i = 1; i <= 5; i++){
            for(int j = 1; j <= 5 - i + 1 ; j++){
                System.out.print(j+ " ");
            }
            System.out.println();
        }

        //pattern 8 

        for(int i = 1; i < 5 ; i++){
            for(int j = 1; j <= i ; j++){
                System.out.print("*");
            }
            System.out.println();
        }

        for(int i = 1; i <= 5; i++){
            for(int j = 1 ; j <= 5-i+1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
            int number = 1;
        for(int i = 1;  i <= 5 ; i++){
            for(int j = 1 ; j <= i ; j++){
                System.out.print(number+ " ");
                number++;
            }
            System.out.println();
        }
    }
}
