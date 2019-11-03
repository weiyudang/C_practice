/*
数组合并
归并排序的思想
*/
#include<stdio.h>
#include<stdlib.h>
void Merger(int *a ,int *b ,int *output,int nA,int nB){
    int i=0,j=0,k=0;
    // int nA=sizeof(a)/sizeof(int);
    // int nB=sizeof(b)/sizeof(int);
    while(i<nA && j<nB){
        if(a[i]>=b[j]){
            output[k++]=b[j];
            ++j;
        }
        else
        {
            output[k++]=a[i];
            ++i;
        }
    }
    if(i==nA){
        for(int m=j;m<nB;m++){
            output[k++]=b[m];
        }
    }else
    {
        for(int m=i;m<nA;m++){
            output[k++]=b[m];
        }
    }

}
int main(){

    int a[]={2,3,4,5,6,8,9};
    int b[]={7,9,10};
    int nOut=0;
    int *output=(int *)malloc(10*sizeof(int));
    Merger(a,b,output,7,3);

    for(int i=0;i<10;i++){
        printf("%d\t",output[i]);
    }

    printf("\n");
    // free output;
    // output=NULL;




}