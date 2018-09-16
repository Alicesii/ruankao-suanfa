//函数heapMaximum
int heapMaximum(ARRAY *A. {

 	 return  A-＞int_array[0]  ;  
}

//函数heapExtractMax
    int heapExtractMax(ARRAY *A. {
    int max;
    max=A-＞int_array[0];
     A-＞int_array[0]=A-＞int_array[A-＞array_size-1] ;
    A-＞array_size --;
    heapify(A,A-＞array_size,0);  //将剩余元素调整成大项堆
    return max;
    }
//函数maxHeapInsert
    int maxHeapInsert(ARRAY *A, int key){
    int i, *p;
    if (A-＞array_size==A-＞capacity)  {  //存储空间的容量不够时扩充空间
    P=(int*)realloc(A-＞int_array, A-＞capacity *2 * sizeof(int));
    if (!p) return -1;
    A-＞int_array=p;
    A-＞capacity=2 * A-＞capacity;
    }
    A-＞array_size ++;
    i = A-＞array_size-1 ;
    while (i＞0 ＆＆A-＞int_array[PARENT(i)]＜key ) {
    A-＞int_array[i]=A-＞int_array[PARENT(i)];
    i=PARENT(i);
    }
     A-＞int_array[i]=key ;
    return 0;
    }