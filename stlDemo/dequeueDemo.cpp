#include<iostream>
#include<deque>
#include<random>
#include "common.h"
#define P alg::print
using namespace std;
using std::default_random_engine;
using std::uniform_int_distribution;
int main(int argc, char const *argv[])
{
    /* code */
    default_random_engine e;
    uniform_int_distribution<int> u(0,1000);
    deque<int> data(20,3);
    P(data[10]);

    for(int i=0;i<data.size();i++){
        data[i]=u(e);
        P(data[i],"data--:");
    }

    data.push_back(20);
    data.push_front(10);
    data.pop_back();
    P(data[10]);
    data.assign(0,2000);
    P(data[0]);
    return 0;
}
