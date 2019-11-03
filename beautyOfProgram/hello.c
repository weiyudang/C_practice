#include<stdio.h>
#include <unistd.h>
//gcc -o hello hello.c
int main(void)
{
    printf("hello world\n");
    for(;;){
        for(int i=0;i<9600000;i++)
        ;
        sleep(10);
    }
    return 0;
}
