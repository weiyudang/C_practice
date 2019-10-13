#include<iostream>
#include<string>
using namespace std;
namespace alg{
    template<typename T>
    void print(T nolist,string info=":") {
        cout<<info<<nolist<<"\n";
}
}