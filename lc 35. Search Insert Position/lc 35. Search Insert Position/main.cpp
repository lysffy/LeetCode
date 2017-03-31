//
//  main.cpp
//  lc 35. Search Insert Position
//
//  Created by 李阳 on 2017/3/23.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        int k=0;
        for(i=0;i<nums.size();i++)
        {
            if(target<=nums[i])
            {
                k=i;
                break;
            }
        }
        if(i==nums.size())
        {
            k=i;
        }
            return k;
    }
};
int main(int argc, const char * argv[]) {
    vector<int> nums={1,3,5,6};
    int tt=0;
    Solution sol;
    int pos=sol.searchInsert(nums, tt);
    cout<<pos<<endl;
    return 0;
}
