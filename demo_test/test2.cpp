#include<iostream>
using namespace std;
#define LENGTH 10

// 声明
extern int age,height;
extern float money;
enum color { //全局变量
    red,
    green,
    hat=20

} c;

int main(){
    cout<<"hello world"<<endl;

    int age;
    float money;
    age=27;
    money=1000.2*LENGTH;
    c=hat;
    const int wjqq=203;
    money+=112;
    cout<<age<<":"<<money<<"||"<<c<<"\n";
    // wjqq=wjqq+2;

    return 0;
}
