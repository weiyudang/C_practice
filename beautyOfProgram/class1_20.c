#include<stdio.h>
#include<stdlib.h>
int Factorial(int num);
int main()
{
    int num=10;
    printf("factorial:%d\n",Factorial(num));
}

int Factorial(int num){
    int result=1;
    for(int i=1;i<=num;i++){
        result*=i;
    }
    return result;
}