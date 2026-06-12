import java.util.*;

public class SolidRhombus {
    public static void main(String[] args){
        System.out.println("Solid Rhombus Pattern:");

        int n = 5;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                System.out.print(" ");
            }
            for(int k=0;k<n;k++){
                System.out.print("* ");
            }
            System.out.println();
        }
        
    }
    
}
