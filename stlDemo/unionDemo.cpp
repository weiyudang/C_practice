#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int ar[]={1,2,3,4,5};
    int as[]={4,5,6,7};
    vector<int> ad(9);

    vector<int>::iterator it;
    //https://www.cnblogs.com/s1124yy/p/5849553.html
    it=set_union(ar,ar+5,as,as+4,ad.begin());
    // it=set_union(ar,ar+5,as,as+4,back_inserter(ad));

    cout<<it-ad.begin()<<endl;
    for(it=ad.begin();it!=ad.end();it++){
        cout<<*it<<" ";
    }

    return 0;
}
