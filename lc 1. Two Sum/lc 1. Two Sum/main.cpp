//
//  main.cpp
//  lc 1. Two Sum
//
//  Created by 李阳 on 2017/2/27.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        bool flag=false;
        for(int p=0;p<nums.size();p++)
        {
            for(int q=p+1;q<nums.size();q++)
            {
                if(nums[p]+nums[q]==target)
                {
                    ans.push_back(p);
                    ans.push_back(q);
                    flag=true;
                    break;
                }
            }
            if(flag==true)
                break;
        }
        return ans;
    }
};
int main(int argc, const char * argv[]) {
    vector<int>a;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        a.push_back(num);
    }
    int target;
    cin>>target;
    Solution sol;
    vector<int>ss;
    ss=sol.twoSum(a, target);
    for(int i=0;i<ss.size();i++)
    {
        cout<<ss[i]<<" ";
    }
    return 0;
}
