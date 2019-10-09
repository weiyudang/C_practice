#include<iostream>
#include<string>
using namespace std;
#include <iomanip>
// using std::setw;
struct Person
{
    /* data */
    string name;
    int age;
    string title;
};

typedef struct Books
{
    /* data */
    string name;
    string publicTime;
} BK;

void showInfo(Person p1);
void showInfoP(Person *p1);


void BookInfo(BK n1);
int main() {
    Person p1;
    Person p2;
    p1.age=20;
    p1.name="weiyudang";
    p1.title="高级算法工程师";
    BK b1;
    b1.name="python数据分析";
    b1.publicTime="2017-07-10";
    showInfo(p1);
    showInfoP(&p1);
    BookInfo(b1);
    
    return 0;
}

void showInfo(Person p1){
    cout<<"Name:"<<std::setw(13)<<p1.name<<"\n";
    cout<<"Age:"<<std::setw(13)<<p1.age<<"\n";
    cout<<"Title:"<<std::setw(13)<<p1.title<<"\n";

    
}



void showInfoP(Person *p1){
    cout<<"Name:"<<std::setw(13)<<p1->name<<"\n";
    cout<<"Age:"<<std::setw(13)<<p1->age<<"\n";
    cout<<"Title:"<<std::setw(13)<<p1->title<<"\n";

    
}

void BookInfo(BK n1){
    cout<<"Name:      "<<std::setw(13)<<n1.name<<"\n";
    cout<<"PublicTime:"<<std::setw(13)<<n1.publicTime<<"\n";
    
}
