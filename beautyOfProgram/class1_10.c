#include<stdio.h>
#include<stdlib.h>

int main(){
    int start;
    int end;
    int step;
    scanf("%d",&start);
    scanf("%d",&end);
    scanf("%d",&step);
    printf("start:%d,end:%d,step:%d\n",start,end,step);
    int sum;
    for(int i=start;i<end;i+=step){
        sum+=i;

    }
    printf("sum:%d\n",sum);

}