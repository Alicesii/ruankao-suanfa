  #include＜stdio.h＞
    int  n,  m;
    int a[60], b[60], p[100] [100] [60];
    void read() { …… /*输入n、 a、 b, 求出m, 代码略*/
    void schedule() {       /*求解过程*/
           int  x, y, k;
           for (x=0;x＜=m;x++) {
                   for (y=0;y＜m;y++) {
                       p[x][y][0]=1;
                        for (k=1;k＜n;k++)
                            p[x] [y] [k] =0;
                   }
           }
    for  (k=1;k＜n;k++) {
            for (x=0;x＜=m;x++) {
                   for (y=0;y＜=m;y++) {
                           if (x-a[k-1]＞=0)
                                p[x][y][k]=p[x-a[k-1]][y][k-1];
                           if ( y-b[k-1]＞=0)
                            p[x] [y] [k]=(p[x] [y] [k] ‖ p[x] [y-b[k-1]] [k-1]);
                      }
                }
          }
    }
    void write(){   /*确定最优解并输出*/
            int x, y, temp, max=m;
            for (x=0;x＜=m;x++) {
                   for (y=0,y＜=m;y++) {
                        if ( p[x][y][n]=1)
                              temp   (x＞=y)?x:y:
                                  if (temp＜max) max = temp;
                      }
                }
          }
          print ("\n%d\n",max) ;
    }
    void main(){
            read() ;
            schedule();
            write() ;
    }