<?php
/* 有一个整数数组，请你根据快速排序的思路，找出数组中第K大的数。
 给定一个整数数组a,同时给定它的大小n和要找的K(K在1到n之间)，请返回第K大的数，保证答案存在。
 测试样例：
 [1,3,5,2,2],5,3
 返回：2
 */
function QuickScanf($arr,$k,$n){
   /*思路，分治法，进行一轮快排判断两边数组大小，
    * 如果右边数组值大k，则只快排右边，直到定的中间值位置恰为n-k；
    * 否则只快排左边，直到右边的数组长度加上左边中间值位置恰为n-k；
    */
   
 $m= quickSort($arr, 0, $k-1,  $k,$n );
 
    var_dump ($m);
    
    
}

function quickSort($arr,$low,$high,$k,$n){
   
    if($high>$low){
        $start=$low;
        $end = $high;
        $index=$arr[$start];
        
        while($start<$end){
            while($start<$end&&$index<$arr[$end]){
                $end--;
                
            }
            if($end>$start){
                $arr[$start]=$arr[$end];
                $start++;
            }
            while($start<$end&&$index>$arr[$start]){
                $start++;
            }
        if($end>$start){
                $arr[$end]=$arr[$start];
                $end--;
            }
        }
       
      
      
        $arr[$start]=$index;
        if($start==($k-$n)){
          return $arr[$start];
            
            
        }
       
        if($start>$k-$n){
               
        //只排左边
             return quickSort($arr, $low, $start-1,$k,$n);
        }
        if($start<$k-$n){
          //只排右边
              return quickSort($arr, $start+1,$high,$k,$n);
            }
        }
       
        
    }
 
      
$arr=array(1,2,3,4,5,6,7,8,9,10);
$len =10;
$k=3;
QuickScanf($arr, $len, $k);



