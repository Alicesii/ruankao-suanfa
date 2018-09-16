   int *TopSort(LinkedDigraphG.  { 
    ArcNode *p;    /*临时指针，指示表结点*/ 
    Queue Q;        /*临时队列，保存入度为0的顶点编号*/ 
  int k=0;    /*临时变量，用作数组元素的下标*/
     intj=0，w=0;    /*临时变量，用作顶点编号*/ 
    int *topOrder，*inDegree; 
    topOrder=(int *)malloc((G.n+1) *sizeof(int)); 
    /*存储拓扑序列中的顶点编号*/ 
    inDegree=(int *)malloc((G.n+1) *sizeof(int)); 
    /*存储图G中各顶点的入度*/ 
    if(!inDegree || !topOrder) return NULL; 
     InitQueue(＆Q)  ;    /*构造一个空队列*/ 
    for(j=1; j＜=G.n; j++){/*初始化*/ 
    topOrder[j]=0;    inDegree[j]=0; 
    } 
    for(j=1;j＜=G.n;j++)  /*求图G中各顶点的入度*/ 
    for(p=G.Vhead[j].firstarc; P; P=P-＞nextarc) 
    inDegree[P-＞adjvex]+=1; 
    for(j=1; j＜=G.n;j++)    /*将图G中入度为0的顶点保存在队列中*/ 
    if(0==inDegree[j])    EnQueue(＆Q,j); 
    while(!IsEmpty(Q)){ 
     DeQueue(＆Q，＆w)  ;    /*队头顶点出队列并用w保存该顶点的编号*/ 
    topOrder[k++]=w; 
    /*将顶点w的所有邻接顶点的入度减1(模拟删除顶点w及从该顶点出发的弧的操作)*/ 
    for(p=G.Vhead[w].firstarc;P; p=p-＞nextarc){ 
     inDegree[p-＞adjvex]-=1; 
    if(0==inDegree[p-＞adjvex] )  EnQueue(＆Q，P-＞adjvex); 
    1/{for$/ 
    }/*while*/ 
    free(inDegree); 
    if( k＜Gn) 
    return NULL; 
    return topOrder; 
    }/*TopSort*/