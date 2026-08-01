import java.util.*;

//Update the 2nd Bit (position = 1) of a number n to 1(n = 0101)

// for Case : 1                                   for Case : 2
// Bitmask : 1<<position                          Bitmask : i << position
//operation : AND with NOT                        Operation : OR

public class Update_Bit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int operation = sc.nextInt();

        int n = 5;
        int position = 1;
        int bitmask = 1 << position;

        if (operation == 1) {
            // set
            int newNumber = bitmask | n;
            System.out.println(newNumber);
        } else {
            int newbitmask = ~(bitmask);
            int newNumber = n & newbitmask;

        }

    }
}
