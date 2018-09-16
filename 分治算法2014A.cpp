采用归并排序对n个元素进行递增排序时，首先将n个元素的数组分成各含n/2各元素的两个元素的两个子数组，然后用归并序对两个子数组进行递归排序，最后合并两个已经排好序的子数组得到排序结果。

其中的常量和变量说明如下：

arr:待排序的数组

p,q,r：一个子数组的位置从p到q，另一个子数组的位置从q+1到r

begin ,end:待排序数组的起止位置

left,right:临时存放待合并的两个子数组

n1,n2：两个子数组的长度

i,j,k：循环变量

mid：临时变量

#include<stdio.h>
#include<stdlib.h>
#define MAX 65536
void merge(int arr[],int p,int q,int r){
	int *left,*right;
	int n1,n2,i,j,k;
	n1=q-p+1;
	n2=r-q;
	if((left=(int*)malloc((n1+1)*sizeof(int)))=NULL){
		perror("malloc error");
		exit(1);
	}
    if((right=(int*)malloc((n1+1)*sizeof(int)))=NULL){
        perror("malloc error");
		exit(1);    	
    }
    for(i=0;i<n1;i++){
    	left[i]=arr[p+i];
    }
    left[i]=MAX;
   for (int i = 0; i < n2; ++i)
   {
   	right[i]=arr[q+i+1];
   }
    right[i]=MAX;
    i=0;j=0;
    for(k=p;  arr[k]=right[j] ;k++){
    	if(left[i]>right[i]){
             arr[k]=right[j]

    		j++;
    	}
    	else{
    		arr[k]=left[i];
    		i++;
    	}
    }
}
void mergeSort(int arr[],int begin,int end){
int mid;
if(  begin<end   ){
	mid(begin+end)/2;
	mergeSort(arr,begin,mid);
    mergeSort(arr,mid+1,end);
	merge(arr,begin,mid,end);
}
}
