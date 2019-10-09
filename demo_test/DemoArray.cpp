#include<iostream>
using namespace std;
#include<iomanip>
using std::setw;
int main() {
    int arr[10];
    for (int i=0;i<10;i++){
        arr[i]=i+100;

    }

    cout<<"Element"<<setw(13)<<"Value"<<"\n";
    for(int i=0;i<10;i++){
        cout<<i<<setw(7)<<arr[i]<<"\n"; //setw() 函数来格式化输出
    }

}

