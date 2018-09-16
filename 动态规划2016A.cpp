#include "stdlib.h" 
#include <stdio.h> 
#define  N  10    /*问题规模*/ 
int m=0    /*牢记录最大连接集合中的接线柱*/ 
Void maxNum(int pi[],int size[N+1][N+1],int n)  {/*求最大不相交连接数*/ 
    int i, j; 
    for(j=0; j < pi[1]; j++)   size[1][j] = 0;   /*当j<π(1)时  */ 
    for(j=pi[1];j<=n;j++) size[i][j]=1  ; /*当j>=π(1)时  */ 
    for(i=2; i < n; i++)   { 
        for(j=0; j < pi[i]; j++)  size[i][j]=size[i-1][j]   ; /*当j<pi[i]时  */ 
        for(j=pi[i];j<=n;j++)  {/*当j>=c[i]时,考虑两种情况*/           size[i][j]=size[i-1][j]>=size[i-1][pi[i]-1]+1 ;
size[i-1][j]:size[i-1][pi[i]-1]+1; 
        } 
    } 
    /*最大连接数  */ 
    size[n][n]=size[n-1][n]>=size[n-1][pi[n]-1]+1 ? size[n-1][n]:size[n-1][pi[n]-1]+1; 
} 
/*构造最大不相交连接集合，net[i]表示最大不相交子集中第i条连线的上端接线柱的序号  
*/ 
void constructSetint pi[],int size[N+1][N+1],int n,int net[n]{ 
    int i,j=n; 
    m=0 
    for(i=n ; i>1 ; i--)    {    /*从后往前*/ 
        if(size[i][j]!=size[i-1][j]){  /*(i,pi[i])是最大不相交子集的一条连线*/   
             net[m++]=i; ;    /*将i记录到数组net中，连接线数自增1*/ 
            j= pi[i]-1;    /*更新扩展连线柱区间*/ 
        } 
    } 
    if(j>=pi[1])  net[m++]=1;  /*当i=1时
*/ 
}