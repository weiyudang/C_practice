#include<iostream>
#include<map>
#include<string>
#include<unordered_map>
/*

## struct 
C++ 的struct 对C做了很多补充，里面可以放函数（构造函数和虚函数）,也可以同struct和class的继承，在C++中也完全可以替代class，他们之间的主要区别在于：
1.class 默认是priavte;而struct是public 继承

## map
map的特性：
- 素偶偶元素都会根据元素的降序
- 所有的元素都是pair
- 不允许有重复的key
- map的内部是以平衡二叉树形式储存的，所以查找的速度为O(logn),速度很快。
- map内部的元素是有序的！所以我们如果只是需要一个按key排序的输出的话，不需要对map进行排序，直接遍历输出即可。
- map中键值对中的键是唯一的，而mutimap中的键可以重复


- http://c.biancheng.net/view/1407.html
- https://www.cnblogs.com/zhengfa-af/p/8144786.html

*/


using namespace std;
template <typename T1,typename T2>
struct Animal{
    T1 name;
    T2 age;
    void showinfo(){
        cout<<"Name:"<<name<<"Age:"<<age<<endl;
    }
};

class Person{
    public:
        void setLevel(int l);
        string name;
        Person(string n,int l,int a);
    private:
        int level;
        int age;

    
};

Person::Person(string n,int l,int a){
    name=n;
    level=l;
    age=a;
} 
// 函数后面不用加; 

void Person::setLevel(int l){
    level=l;
}



int main(int argc, char const *argv[])
{
    
    Animal<string,int> dog={"liming",12};
    cout<<dog.age<<endl;

    // cout<<Animal<string,int>{"weiyudang",20}.name<<endl;
    

    map<string,int> citys;
    citys["beijing"]=1;
    citys["shandong"]=2;
    citys["shanghai"]=3;
    citys["shenzhen"]=4;

    pair<string,int> value("guangzhou",5);
    citys.insert(value);

    map<string,int>::iterator citer=citys.begin();

    // map<string,int>::reverse_iterator citer=citys.end(); error

    for(;citer!=citys.end();citer++){
        cout<<citer->first;
        cout<<" "<<citer->second<<"\n";
    }

    cout<<citys.size()<<endl;

    cout<<"北京:"<<citys["beijing"]<<endl;

    citer=citys.find("beijing");
    if(citer!=citys.end()){
        cout<<"found"<<endl;
    }
    //修改实值，键值不可修改
    cout<<citer->first<<endl;
    citer->second=20;
    cout<<citer->second<<endl;

    citys.erase("beijing");

    citer=citys.begin();
    for(;citer!=citys.end();citer++){
        cout<<citer->first<<endl;
    }

    //mutimap
    Person p1("weiyudang",10,26),p2("weijiqi",8,20),p3("liming",1,40);
    multimap<string,Person> mp;
    mp.insert(make_pair("ruc",p1));
    mp.insert(make_pair("ruc",p2));
    mp.insert(make_pair("ruc",p3));
    mp.insert(make_pair("ugc",p2));
    mp.insert(make_pair("pgc",p3));

    int num=mp.count("ruc");
    cout<<endl;
    cout<<num<<endl;
    auto begin = mp.lower_bound("ruc");
    begin->second.setLevel(100);
    cout<<begin->second.name<<endl;
    //https://blog.csdn.net/m0_38126105/article/details/82730775
    /* unordered_map*/
    unordered_map<string,int> um;
    um.insert(make_pair("beijing",1));
    um.insert(make_pair("shanghai",2));
    um.insert(make_pair("so",3));
    um.insert(make_pair("lo",4));
    um.insert(make_pair("lo",4));
    cout<<um.size()<<endl;












    
    return 0;
}
