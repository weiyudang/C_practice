#include<iostream>
using namespace std;
//https://www.cnblogs.com/jpfss/p/10337163.html

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(int argc, char const *argv[])
{
    int ia[3][4]={1,2,3,4,5,6,7,8};
    // 下标
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
           cout<<ia[i][j]<<"\n";
        }
    }
    // 指针
    for(int(*p)[4]=ia;p!=ia+3;p++){
        for(int *q=*p;q!=*p+4;q++){
            cout<<*q<<endl;
        }
    }
    /*
    顾名思义是某一个变量或对象的别名，对引用的操作与对其所绑定的变量或对象的操作完全等价
    */
    int arr[3]={1,2,3};
    int (&b)[3]=arr;
    cout<<&arr[0]<<"|"<<&b[0]<<endl;
    cout<<&arr[1]<<"|"<<&b[1]<<endl;
    cout<<&arr[2]<<"|"<<&b[2]<<endl;


    int v1=20,v2=100;
    swap(v1,v2);
    cout<<"v1:"<<v1<<endl;





    return 0;
}
