#include<iostream>
#include<cstdio>
#define DEBUG
using namespace std;
/*
有时候我们在编程的时候，希望有些代码在我们需要时编译，不需要时不编译，也就是让它快速注释，这时候即可以考虑#ifdef和#endif
*/
int main(int argc, char const *argv[])
{
    
    #ifdef DEBUG
    cout<<"hello debug"<<endl;
    #endif
    return 0;
}

