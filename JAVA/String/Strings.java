import java.util.*;

public class Strings{

    public static void main(String args[]){
        String firstName = "Priyanshu";
        
        String lastName = "Pandey";

        String fullName = firstName + " @ " + lastName;

        System.out.println(fullName.length());

        for(int i = 0; i < fullName.length(); i++){
            System.out.println(fullName.charAt(i));
        }

        
    }
}