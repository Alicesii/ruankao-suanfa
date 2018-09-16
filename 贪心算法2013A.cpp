 void   schedule12{
           int i,j,k max=0;
           for(i=0;i＜m;i++){
                   d[i]=0;
               for(j=0;j＜n;j++){
                   s[i][j]=0;
           }
    }
    for(i=0;i＜m;i++){    //分配前m个任务
        s[i][0]=i;
       d[i]=d[i]+t[i];
    count[i]=1;
    }
    for(i=m;i＜n;i++){    //分配后n-m个任务
    int min=d[0];
    k=0;
    for(j=1;j＜n;j++){    //确定空闲机器
    if(rain＞d[j]){
        min=d[j];
        k=j;    //机器k空闲
    }
    }
    srk][0]=i;
    count[k]=count[k]+1;
    d[k]=d[k]+t[i];
    for(i=0;i＜m;i++){    //确定完成所有任务所需要的时间
    if(Max＜d[i]){
    max=d[i];
    }
        }
      }
    }