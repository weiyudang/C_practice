/*
vector
*/

#include<string>
#include<iostream>
#include<vector>
#include "common.h"
using namespace std;
class Solution {
public:
    bool duplicate(int numbers[], int length, int* duplication) {
        if(numbers == nullptr || length <= 0)
            return false;

        for(int i = 0; i < length; ++i) {
            while(numbers[i] != i) {
                if(numbers[i] == numbers[numbers[i]]) {
                    *duplication = numbers[i];
                    return true;
                }
                // 交换numbers[i]和numbers[numbers[i]]
                swap(numbers[i], numbers[numbers[i]]);
            }
        }
        return false;
    }
};
int main()
{
    vector<int> obj;
    obj.push_back(100); //在数组的最后添加一个数据
    obj.push_back(200);
    obj.push_back(300);
    obj.pop_back();
    alg::print<int>(obj.size());
    // alg::print<int>(obj[2]);
    obj.clear();
    for(int i=0;i<3;i++){
        alg::print<int>(obj[i]);
    }

    char letter;
    letter='A';
    printf("%c",letter);
    Solution a;
    


    /* code */
    return 0;
}

