  #include <stdio.h> 
  #include <string.h> 
int c［50］［50］; 
int maxi; 
int maxj; 
int lcs(char *x, int m, char *y, int n) 
{ 
     int i, j; 
     int max= 0; 
    int maxi= 0; 
    int maxj = 0; 
 for ( i=0; i＜＝m ; i++)            c［i］［0］= 0; 
for (i =1; i<= n; i++)            c［i］［0］=0; 
for (i =1; i<= m; i++) { 
      for (j=1; j<= n; j++) { 
         If (x[i-1] == y[j-1]  )    { 
c[il[j] = c[i - l][j - i] + 1; 
if(max<c[il[j] { 
   max=c[i][j] : 
     maxi = i; 
     maxj =j; 
  } 
} 
else    c[i][j]=0 
        } 
    } 
     retum  max; 
}     
void printLCS(int max, char *x) { 
          int i= 0; 
       if (max = 0)        retum; 
      For （ i=maxi-max ； i < maxi; i++) } 
void main（）
{ 
  Char* x= "ABCADAB"; 
  Char*y= "BDCABA"; 
   int max= o; 
  int m = strlen(x); 
  int n = strlen(y); 
  Max=lcs(x,m,y,n) 
  printLCS（max，x）
 } 