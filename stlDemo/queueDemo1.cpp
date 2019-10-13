#include<iostream>
#include<queue>
#include<string>
using namespace std;
#define DEBUG1
//https://blog.csdn.net/ZHLZYF/article/details/83280481
int main(int argc, char const *argv[])
{
    queue<string> q;
    q.push("Hello world!");
    q.push("China");
    q.push("weiyudang");
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;

    #ifdef DEBUG
    for(int i=0,s=q.size();i<s;i++){
        cout<<q.front()<<endl;
        q.pop();
    }
    #endif

    while(1-q.empty()){
        cout<<q.front()<<endl;
        q.pop();
        
    }


    
    
  

    return 0;
}

