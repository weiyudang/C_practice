#include<iostream>
#include<string>
#include "common.h"
#include <array>
#define P alg::print
using namespace std;


int main(int argc, char const *argv[])
{
    array<double,20> data;
    // data.fill(4.0);
    for(int i=1;i<100;i++){
        data[i]=i*2+1;
    }
    P(data.at(0));

    std::array<int,5> values={1,2,3,4,5};
    // P(values[2]);
    

    std::array<double,10>::iterator start,ends;
    // P(*(data.begin()));
    // start=data.begin();
    

    for(start=data.begin(),ends=data.end();start!=ends;start++){
        P(*start,"P:");
    }
    
    // while (start!=data.end())
    // {
    //     /* code */
    //     P(*(++start),"P:");
    // }
    

    return 0;
   
    

}
