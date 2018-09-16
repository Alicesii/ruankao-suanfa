 QUICKSORT (A，p，r){
        if  (p ＜r){
            q=PARTITION(A，p，r) ；
            QUICKSORT(A，p，q-1)；
            QUICKSORT(A，q+1，r)；
        }
    }
    PARTITION(A，p，r){
        x=A[r]；i=p-1；
        for(j=p；j≤r-1；j++){
            if  (A[j]≤x){
                i=i+1；
                交换A[i]和A[j]
        }
        }
        exchange A[i+1] 和 A[r]
 return   i+1;
    }

待排序数组是否能被较均匀地划分对快速排序的性能有重要影响，因此枢轴元素的选取非常重要。有人提出从待排序的数组元素中随机地取出一个元素作为枢轴元素，下面是随机化快速排序划分的伪代码——利用原有的快速排序的划分操作，请填充其中的空缺处。其中，RANDOM(i，j)表示随机取i到j之间的一个数，包括i和j。
    RANDOMIZED- PARTITION(A，p，r){
       i=RANDOM(p，rl)；
       交换A[i]  和 A[r] ;
    return PARTITION (A，p，r)；
    }