import java.util.*;

// Clear the 3rd bit (position = 2 ) of a number n.
//Answer : - 1. BitMask : 1<<postion 2.AND with NOT.
public class Clear_Bit {
    public static void main(String[] args) {
        int n = 5;
        int pos = 2;
        int bitmask = 1 << pos;
        int notbitmask = ~(bitmask);

        int newNumber = n & notbitmask;

        System.out.println(newNumber);
    }
}
