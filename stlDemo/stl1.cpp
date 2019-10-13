#include <iostream>
#include <string>
#include "common.h"
#define P alg::print
using namespace std;

// namespace std;
int main(int argc, char const *argv[])
{

    string name = "weiyudang";
    string school = "ruc china";
    P(name.size(), "size:");
    P(name.length(), "length:");
    name.append("_coll");
    P(name.at(2));

    string city;
    city.assign("heze");
    city.assign(5, 'W');
    city.insert(1, "ddd");

    city += "NNN";
    string ss=city.substr(1,3);
    string::iterator iterA;  // 首字母的地址
    for(iterA=city.begin();iterA!=city.end();iterA++){
        P(*iterA);
        // P(iterA);

    }
    //http://c.biancheng.net/view/411.html

    P(ss);

    return 0;
}
