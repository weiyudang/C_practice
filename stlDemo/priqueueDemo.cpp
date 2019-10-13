#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// https://blog.csdn.net/weixin_36888577/article/details/79937886
//pari的比较，先比较第一个元素，第一个相等比较第二个
int main(int argc, char const *argv[])
{
    priority_queue<pair<int,int> > q;
    pair<int,int> b(1,2);
    pair<int,int> a(2,3);
    pair<int,int> c(2,5);
    pair<int,int> d(3,2);
    q.push(a);
    q.push(b);
    q.push(c);
    q.push(d);
    while(!q.empty()){
        cout<<q.top().first << "    " <<q.top().second << "\n";
        q.pop();
    }
    return 0;
}

