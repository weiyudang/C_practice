#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() {
    int num=4;
    cout<<sin(num)<<"\n";
    cout<<cos(num)<<"\n";
    cout<<sqrt(num)<<"\n";
    cout<<pow(num,2)<<"\n";
    int aa=(unsigned)time(NULL);
    srand(aa);
    for (int i=0;i<10;i++){
        int j=rand();
        cout<<j<<"\n";
    }


    cout<<aa<<"\n";
    return 0;
}
