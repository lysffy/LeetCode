//
//  main.cpp
//  lc 26. Remove Duplicates from Sorted Array
//
//  Created by 李阳 on 2017/3/1.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp;
        if(nums.empty())
            return 0;
        if(nums.size()==1)
            return 1;
        temp=-11111111;
        for(auto i=nums.begin();i!=nums.end();)
        {
            if(temp==(*i))
            {
                nums.erase(i);
            }
            else
            {
                temp=(*i);
                i++;
            }
        }
        
        int k=(int)nums.size();
        return k;
    }
};
int main(int argc, const char * argv[]) {
    int n,p,q;
    vector<int>num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        num.push_back(p);
    }
    Solution sol;
    q=sol.removeDuplicates(num);
    cout<<q;
    return 0;
}
