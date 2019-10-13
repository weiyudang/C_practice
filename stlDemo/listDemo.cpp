#include <iostream>
#include <string>
#include "common.h"
#include "list"
#define P alg::print
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    list<string> names;
    names.push_back("weiyudang");
    // list<string> names(0,"weiyudang");
    names.insert(++begin(names),"wangjiaq");
    P(names.front());

    list<double> data;
    for(int i=0;i<10;i++){
        double a=i*1.2;
        data.push_front(a);

    }

    for( const auto& num : data){
        P(num);
    }


    return 0;
}

