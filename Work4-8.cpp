// 特别困的学生；
#include <cstdio>

const int n=20;
int A[n]={1,2,3,4,5,5,4,3,2,1,1,2,3,4,5,5,4,3,2,1}; //清醒A分钟
int B[n]={5,20,15,14,24,30,11,8,10,9,5,20,15,14,24,30,11,8,10,9}; //睡B分钟
int C[n]={2,3,4,5,6,6,5,5,4,1,2,4,5,6,7,8,2,2,3,4};
int F[n]={0}; //记录当前状态 1为在睡觉 0为清醒；
int E[n]={0}; //额外清醒的时间

int count() {
    int sum=0;
    for(int i=0;i<n;i++) 
        if(F[i]==1) sum++;
    return sum;
}

int main() {
    int time=0;
    for(int i=0;i<n;i++) {
            if(C[i]%(A[i]+B[i])<=A[i]&&C[i]%(A[i]+B[i])!=0) 
                F[i]=0; //标记为清醒
            else
                F[i]=1; //标记为在睡觉
        }
    while(1) {
        printf("time:%3d sleeping students: %3d\n",time,count());
        for(int i=0;i<n;i++) printf("%d ",F[i]);
        printf("\n");
        if(!count()) break;
        for(int i=0;i<n;i++) {
            C[i]++;
            if((C[i]-E[i])%(A[i]+B[i])==1)
                F[i]=0;   //清醒的第一分钟将其标记为清醒
            else if((C[i]-E[i])%(A[i]+B[i])==A[i]+1) {
                if(2*count()<=n-2) {  //这个判断条件，若是n-2，意思是这个学生判断，他睡了后全班睡觉人数就超过一半，可以睡觉。若是n，该学生会在已睡觉学生数严格超过一半的情况才睡觉。
                //假设全班10个人，已睡觉的5个，n-2的情况下该学生睡觉，n的情况该学生不睡觉。
                    F[i]=0; // 本该睡觉，但是睡觉人数少，因此再清醒A[i]分钟；
                    E[i]+=A[i];
                }
                else
                    F[i]=1; //刚开始睡觉的第一分钟将其标记为睡觉
            }
        }
        time++;
    }
    return 0;
}