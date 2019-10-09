#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        double salary;
        void showInfo(void);
        void showName(void){ //内联
            cout<<"Name:"<<name<<"\n";
        }

};

void Person::showInfo(void){ //范围解析符::
    cout<<"Name:"<<std::setw(13)<<name<<"\n";
    cout<<"Age:"<<std::setw(13)<<age<<"\n";
    cout<<"Salary:"<<std::setw(13)<<salary<<"\n";

};

int main() {

    Person p1;
    p1.age=20;
    p1.name="魏玉党";
    p1.salary=210000.2;

    cout<<p1.age<<"\n";
    p1.showInfo();
    p1.showName();
    return 0;



}