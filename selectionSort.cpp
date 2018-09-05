//g++  5.4.0

#include <iostream>
using namespace std;

void selectionSort (int array[], int length){
    
        for (int i = 0; i<length-1; i++){
            int min = i;
            
            
            for (int j = i + 1; j < length; j++){
                if (array[j] < array[min]){
                    min = j;
                }
                
                
            }
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
            }
             

        }
         
 /* Another way to return an array from function
 int* selectionSort (int array[], int length){
    
        for (int i = 0; i<length-1; i++){
            int min = i;
            
            
            for (int j = i + 1; j < length; j++){
                if (array[j] < array[min]){
                    min = j;
                }
                
                
            }
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
            }
             
return array;
        }
 
 
 
 
 */
    
      
   
int main()
{
       int array[] = {29, 31, 37, 41, 79, 83, 89, 43, 47, 53, 59, 61, 67, 71, 73, 2, 3, 5, 7, 11, 13, 17, 19, 23, 97};
        
       int length = (sizeof(array)/ sizeof(array[0]));
       
       selectionSort(array,length);
       for (int k = 0; k< length;k++){
        
                 cout << array[k] <<endl;
        }
    
}
