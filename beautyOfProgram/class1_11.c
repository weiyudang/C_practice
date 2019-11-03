/*
数组元素反转
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
   char name [] ="weiyudang";
   int size_name=sizeof(name)-1;

//    printf("%c\n",name[size_name-1]);

   for(int i=0;i<size_name/2;i++){
       char tmp=name[i];
       name[i]=name[size_name-i-1];
       name[size_name-i-1]=tmp;
   }

   for(int i=0;i<size_name;i++){
       printf("%c\n",name[i]);
   }
//   system("pause");
    /* code */
    return 0;
}
