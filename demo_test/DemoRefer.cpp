#include<iostream>
using namespace std;
int main() {
    int i;
    double j;
    int& ri=i;
    double& rj=j;
    i=10;
    j=10.3;

    cout<<rj<<"\n";
    cout<<j<<"\n";

}