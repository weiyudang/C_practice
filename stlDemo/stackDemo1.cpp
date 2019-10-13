#include <iostream>
#include <stack>
#include<string>
using namespace std;

struct Node{
    string name;
    int age;
    Node (string x,int y){
        name=x;age=y;
    }
}; //struct 后面的;不要忘了

int main(int argc, char const *argv[])
{
    /* code */
    stack<int> mystack;
    for(int i=0;i<5;i++){
        mystack.push(i);
    }
    cout<<mystack.size()<<endl;
    while (!mystack.empty())
    {
        cout<<mystack.top()<<"\n";
        mystack.pop();
    }

    //example 2;
    /*
    emplace 函数可以将一个元素加入栈中，与push的区别在于：emplace可以直接传入Node的构造函数的参数，并将构造的元素加入栈中
    */

    stack<Node> nstack;
    
    // nstack.emplace(("weiyudang",20));
    //nstack.push(1,2) 编译不通过
    nstack.push(Node("王佳琪",18));

    Node p=nstack.top();
    cout<<p.name<<":"<<p.age<<endl;
    stack<Node> nstack2;
    nstack2.swap(nstack);//swap函数可以交换两个栈的元素
    cout<<"nstack size:"<<nstack.size()<<endl;
    cout<<"nstack2 size:"<<nstack2.size()<<endl;




    

    return 0;
}

