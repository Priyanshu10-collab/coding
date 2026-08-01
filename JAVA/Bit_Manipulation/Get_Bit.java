import java.util.*;

//Get third 3rd bit of a number n
// Answer = 1. Bit mask : -   1 << i  2. operation :- AND

public class Get_Bit {
    public static void main(String[] args) {
        int n = 5;
        int pos = 2;
        int bitmask = 1<<pos;
        if((bitmask & n) == 0){
            System.out.println("Bit was Zero ");
        }else{
            System.out.println("Bit was One");
        }

    }
}
