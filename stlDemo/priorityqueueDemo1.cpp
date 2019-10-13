#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    //对于基础类型默认为大顶堆
    priority_queue<int> q;
    // 等同于priority_queue<int,vector<int>,less<int> > a;  这里一定要有空格，不然成了右移运算符

    priority_queue<string> qs;

    for(int i=0;i<5;i++){
        q.push(i);
        q.push(i+10);
    }

    while (!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();

    }
    cout<<endl;
    qs.push("weiyudang");
    qs.push("lo");
    qs.push("ds");
    qs.push("wangji");

    while(!qs.empty()){
        cout<<qs.top()<<endl;
        qs.pop();

    }
    




    return 0;
}
