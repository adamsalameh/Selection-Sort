//'main' method must be in a class 'Rextester'.
//Compiler version 1.8.0_111

import java.util.*;
import java.lang.*;

class Rextester
{  
    public static int[] selectionSort (int[] array){
        for (int i = 0; i<array.length; i++){
            
               
                int min = i;
                int length = array.length;
               for (int j = i + 1; j <length; j++){
                   
                if (array[j] < array[min]){
                    min = j;
                }
                            
                         }
            int temp = array[min];
                      array[min] = array[i];
                      array[i] = temp;
                    
                 
    
        } return array;
    }
    public static void main(String args[])
    {
       
        int[] array = {29, 31, 37, 41, 79, 83, 89, 43, 47, 53, 59, 61, 67, 71, 73, 2, 3, 5, 7, 11, 13, 17, 19, 23, 97};
        System.out.println(Arrays.toString(array));
        selectionSort(array);
        System.out.println(Arrays.toString(array));
    }
}
