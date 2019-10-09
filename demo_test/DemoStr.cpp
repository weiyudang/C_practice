#include<iostream>
#include <cstring>
#include<string>


using namespace std;
void print(string strname);
void printInt(long intname);
int main() {
    char name[70]="weiyudang";
    char love[11]="love";
    char name2[]=" 王佳琪";
    strcat(name,name2);
    cout<< name <<"\n";
    cout<<strlen(love)<<"\n";

    string bumen="人工智能部";
    string xiaozu="推荐";
    string huizong;
    huizong=bumen;
    print(huizong);
    print(bumen+"-"+xiaozu);
    cout<<bumen.size()<<"\n";
    cout<<&bumen<<"\n";
    cout<<*(&bumen)<<"\n";



    
    return 0;
}

void print(string strname){
    cout<<strname<<"\n";
}

void printInt(long intname){
    cout<<intname<<"\n";
}

