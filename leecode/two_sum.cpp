// 1. Two Sum
// https://leetcode.com/problems/two-sum/description/
// 时间复杂度：O(n)
// 空间复杂度：O(n)
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums ,int target){
        unordered_map<int,int> record;
        for(int i=0;i<nums.size();i++){
            int complemet=target-nums[i];
            if(record.find(complemet)!=record.end()){
                int res[]={i,record[complemet]};
                return vector<int>(res,res+2);
            }
            record[nums[i]]=i;

        }
        
    } 
};
