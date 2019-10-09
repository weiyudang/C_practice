#include<iostream>
using namespace std;

void func_while(int nums);
void func_for(int nums);
void func_dowhile(int nums);
int main() {

    int number=10;
    func_while(number);

    func_for(number);

    int arr[5]={1,2,3,4,100};
    // for(int &x : arr){
        
    //     x*=3;
        
    //     cout<<x<<"\n";
    // }

    for (int i=0;i<number;i++){
        if (i%2==0)
        {
            cout<<"偶数"<<"\n";
        }else
        {
            cout<<"奇数"<<"\n";
        }


        switch (i%2)
        {
        case 0:
            cout<<i<<":是偶数"<<"\n";
            break;
        case 1:
            cout<<i<<":是奇数"<<"\n";
            break;
        
        default:
            break;
        }
        
        
    }


    



}

void func_while(int nums){
    cout<<"while loop"<<"\n";
    while(nums<20){
        cout<<"NUM:"<<nums<<"\n";
        nums++;
    }
}


void func_for(int nums){
    cout<<"for loop"<<"\n";
    for(int i=1;i<nums;i++){
        cout<<"NUM:"<<i<<"\n";
    }
}