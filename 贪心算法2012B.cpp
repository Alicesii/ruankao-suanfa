  
//函数firstfit
int firstfit13 {
          int i, j;
          k=0;
          for(i=0; i＜n; i++){
                  b[i]=0;
          }
          for i=0; i＜n; i++) {
            j=0
          while (C-b [j]＜s [i]){
          j++;
          }
           b[j]=b[j]+s[i];
          k=k＞(j+1)? k: (j+1);
          }
           return k;
    }

 //函数bestfit
    int bestfit13 {
       int i, j ,min, m, temp;
       k=0;
       for (i=0; i＜n; i++) {
          b[i]=0;
       }
       for (i=0; i＜n; i++) {
          min=C;
          m=k+1;
          for (j=0; j＜k+1; j++) {
              temp=C-b [j]-s [i];
              if(temp＞0 && temp＜min) {
                  min=temp;
                 m=j;
         }
       }
        b[m]=b[m]+s[i];
       k=k＞(m+1)? k: (m+1);
     }
     return k;
    }