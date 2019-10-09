#include<iostream>
#include<ctime>
using namespace std;

int main() {
    time_t t=time(0);
    char* dt=ctime(&t);
    tm *gmt=gmtime(&t);
    dt = asctime(gmt);
    cout<<t<<"\n";
    cout<<dt<<"\n";
    cout<<gmt->tm_min<<"\n";
    cout<<gmt->tm_hour<<"\n";
    clog<<gmt->tm_wday<<"\n";

}