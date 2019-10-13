#include<iostream>
#include<string>
using namespace std;
/* typedef unsigned int size_t;
size_t 是无符号的整型
https://blog.csdn.net/liangtianmeng/article/details/83049295
*/
int main(int argc, char const *argv[])
{
    int i=-1;
    signed int ik=-2;
    unsigned int v=unsigned(ik);
    cout<<v<<endl;
    string name="weiyudang";
    if (i>signed(name.length())){
        printf("hello world!!\n");
    }
    else{
        printf("Hello Demo\n");

    }
    return 0;
}

