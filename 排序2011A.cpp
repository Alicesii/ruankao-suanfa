
void sort(int n, int a[], int b[])  {
    2    int c[R], i;
    3    for(i=0; i＜  R  ; i++)  {
    4    c[i]=0;
    5    }
    6    for(i=0; i＜n; i++)  {
    7    c[a[i]]=  c[a[i]]+1 ;
    8    }
    9    for(i=1; i＜R; i++)  {
    10    c[i]=  c[i]+c[i-1]  ;
    11    }
    12    for(i=0; i＜n; i++)  {
    13    b[c[a[i]]-1]= a[i] ;
    14    c[a[i]]=c[a[i]]-1;
    15    }
    16  }