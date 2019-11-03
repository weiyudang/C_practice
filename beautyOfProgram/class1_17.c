/*
质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isPrime(int n);
int main(int argc, char const *argv[])
{
    
    int start=101,end=200;
    for(start=101;start<end;start++){
        int flag=isPrime(start);
        if(flag)
            printf("%d\t",start);
    }
    printf("\n");
    

    return 0;
}

int isPrime(int n){
    int k=(int)sqrt(n);
    int flag=1;
    for(int i=2;i<k;i++){
        if(n%i==0)
            flag=0;
            break;
    }

    return flag;

}
