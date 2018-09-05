<?php //php 7.0.8

function selectionSort($array) { 
    
    // passing the array by reference will effect the orginal array add & : selectionSort( &$array)
    // function selectionSort(&$array) {
    
    for ($i = 0; $i < count($array)-1; $i++) {
        
        $min = $i;
        
        for ($j = $i+1; $j <count($array); $j++) {
            
            if ($array[$j] < $array[$min]) {
                
                $min = $j;
                
            }
            
        }
          $temp = $array[$min];
          $array[$min] = $array[$i];
          $array[$i] = $temp;
     }
                        
     return $array;
}

//                0  1    2   3   4   5   6   7   8   9  10  11  12  13  14  15 16 17 18 19  20  21  22  23  24
$numbers = array(29, 31, 37, 41, 79, 83, 89, 43, 47, 53, 59, 61, 67, 71, 73, 2, 3, 5, 7, 11, 13, 17, 19, 23, 97);
       
        
    print_r($numbers);
    echo "The array after the selection sort\n";
    print_r(selectionSort($numbers));
    print_r($numbers); // The orginal array didn't effect if you want to change it pass it by reference 
  
?>
