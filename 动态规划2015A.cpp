#include <stdio.h>
#include <math.h>
#define N4
/*判断第k个皇后目前放置位置是否与前面的皇后冲突*/
in isplace(int pos[], int k) {
    int i;
        for(i=1; i<k; i++) {
          if( pos[i] ==pos[k]|| fabs(i-k)  ══ fabs(pos[i] - pos[k])) {
            return();
          }
        }
        return 1;
}
 
int main() {
    int i,j,count=1;
    int pos[N+1];
    //初始化位置
    for(i=1; i<=N; i++) {
        pos[i]=0;
        }
            j=1   ；
        while(j>=1) {
            pos[j]= pos[j]+1；
             /*尝试摆放第i个皇后*/
            while(pos[j]<=N&& isplace(pos,j)==0) {
                pos[j]= pos[j]+1;
            }
      /*得到一个摆放方案*/
            if(pos[j]<=N&&j══ N) {
                printf("方案%d: ",count++);
                for(i=1; i<=N; i++){
                    printf("%d  ",pos[i]);
                }
                printf("\n");
          }
          /*考虑下一个皇后*/
          if(pos[j]<=N&&  j<N ) {
              j=j+1;
          } else{ //返回考虑上一个皇后
              pos[j]=0;
                j=j‐1 
          }
    }
    return 1;
}