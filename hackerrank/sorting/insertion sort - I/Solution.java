import java.io.*;
import java.util.Scanner;

public class Solution {
    
    

    public static void insertIntoSorted(int[] ar) {
        // Fill up this function  
        int empty=0,position=0;
        int number = ar.length;
        empty = ar[number-1];
        for(int i=number-2;i>=0;i=i-1){
            if(ar[i] > empty)
            {
                ar[i+1] = ar[i];
                position = i;
                for(int j=0;j<number;j++){
                    System.out.print(ar[j]+" ");
                    }
              System.out.println("");      
            }
        }
        ar[position]=empty;
        printArray(ar);
               
        
    }
    
    
/* Tail starts here */
     public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int[] ar = new int[s];
         for(int i=0;i<s;i++){
            ar[i]=in.nextInt(); 
         }
         insertIntoSorted(ar);
    }
    
    
    private static void printArray(int[] ar) {
      for(int n: ar){
         System.out.print(n+" ");
      }
        System.out.println("");
   }
    
    
}
 
