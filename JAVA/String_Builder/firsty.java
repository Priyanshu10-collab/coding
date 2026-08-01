import java.util.*;

public class firsty {
    public static void main(String args[]){
        StringBuilder sb = new StringBuilder("Ram");
        System.out.println(sb);

        //char at index 0
        System.out.println(sb.charAt(0));

        //set char at index 0
        sb.setCharAt(0, 'S');
        System.out.println(sb);

        sb.insert(1,'a');
        System.out.println(sb);

        sb.delete(2,3);
        System.out.println(sb);

        sb.append('b');
        System.out.println(sb);


        for(int i =0; i< sb.length()/2; i++){
            int front = i;
            int back = sb.length() - 1 -i;

            char frontChar = sb.charAt(front);
            char backChar = sb.charAt(back);

            sb.setCharAt(front, backChar);
            sb.setCharAt(back, frontChar);
        }
        System.out.println(sb);
    }
    
}
