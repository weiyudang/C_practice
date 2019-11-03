#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char *name=" weiyudang";
    printf("%s\n length:%d\n",name,strlen(name));
    char city[30]=" shandong";
    strcat(city,name);
    printf("%s\n",city);

    char *beifen="yu";
    char *p;
    p=strstr(name,beifen);
    if(p){
        printf("%s\n",p);
    }else
    {
        printf("Not Found\n");
    }
    
    return 0;
}