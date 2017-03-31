//
//  main.cpp
//  lc 14. Longest Common Prefix
//
//  Created by 李阳 on 2017/3/1.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string ret = "";
        char c;
        int index = 0;
        if(strs.empty())
            return ret;
        while(true)
        {
            for(int i = 0; i < strs.size(); i ++)
            {
                if(i == 0)
                {
                    if(index < strs[0].size())
                        c = strs[0][index];
                    else
                        return ret;
                }
                // no else, 0 may equals to strs.size()-1
                if(i == strs.size()-1)
                {
                    if(index >= strs[i].size() || strs[i][index] != c)
                        return ret;
                    else
                    {
                        ret += c;
                        index ++;
                    }
                }
                if(i != 0 && i != strs.size()-1)
                {
                    if(index >= strs[i].size() || strs[i][index] != c)
                        return ret;
                }
            }
        }
        return ret;
    }
};
int main(int argc, const char * argv[]) {
    vector<string>s;
    int n;
    cin>>n;
    string ss,str;
    for(int i=0;i<n;i++)
    {
        cin>>ss;
        s.push_back(ss);
    }
    Solution sol;
    str=sol.longestCommonPrefix(s);
    cout<<str<<" ";
    return 0;
}
