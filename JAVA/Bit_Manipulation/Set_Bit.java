import java.util.*;

// Set the 2nd bit (position = 1) of a number n.
// Answer : 1. BitMask: 1<<i  2. Operation : OR
public class Set_Bit {
    public static void main(String[] args) {
    int n = 5;
    int pos = 1;
    int bitmask = 1 << pos;

    int newNumber = n | bitmask;

    System.out.println(newNumber);
    }
}
