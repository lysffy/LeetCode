//
//  main.cpp
//  lc 27. Remove Element
//
//  Created by 李阳 on 2017/3/1.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
            return 0;
        for(auto i=nums.begin();i!=nums.end();)
        {
            if(val==(*i))
            {
                nums.erase(i);
            }
            else
            {
                i++;
            }
        }
        return (int)nums.size();
    }
};
int main(int argc, const char * argv[]) {
    int n,val,sum;
    vector<int>num;
    cin>>n;
    int ss;
    for(int i=0;i<n;i++)
    {
        cin>>ss;
        num.push_back(ss);
    }
    cin>>val;
    Solution sol;
    sum=sol.removeElement(num, val);
    cout<<sum;
    return 0;
}
