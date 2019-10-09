#include<iostream>
using namespace std;
void func(void);
static int count1=10;
int main() {

    while (count1--)
    {
        /* code */
        func();
    }
    return 0;
    
}

void func(void){
    static int i=5;
    i++;
    cout<<"变量i:"<<i;
    cout<<"变量count:"<<count1<<"\n";
}