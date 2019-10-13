#include<iostream>
#include<stdexcept>
using namespace std;
void my_stdexcept(int val){
    if (val <0){
        throw std::invalid_argument("invalid argument");
    }
    else{
        printf("test success.\n");
    }
}


int main(int argc, char const *argv[])
{
    /* code */
    try{
        my_stdexcept(-1);
    }
    catch (std::exception ex){
        printf("exception:%s\n",ex.what());
    }
    

    return 0;
}

