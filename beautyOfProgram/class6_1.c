#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int flag=1;
    char time[128];
    _strtime(time);
    printf("OS time:%s\n",time);
    return 0;
}
