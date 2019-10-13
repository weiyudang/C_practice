#include<iostream>
#include<vector>
#include "common.h"
#define P alg::print
using namespace std;


int main(int argc, char const *argv[])
{
    std::vector<double> data(20,1.0);
    data[0]=20.;
    P(data[2]);
    data.reserve(30);
    data.clear();
    data.resize(2,0.88);
    P(data[2]);
    P(data.size(),"data.size:");
    P(data.capacity(),"data.cap:");
    data.push_back(100.2);

    data.insert(std::end(data),0.568); //插入
    P(data.front());  //data.front 返回的是引用即别名
    P(data.back());
    data.front()=1.023;
    P(data.front());  //data.front 返回的是引用即别名
    
    







    
    return 0;
}

