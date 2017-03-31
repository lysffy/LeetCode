//
//  main.cpp
//  lc 28. Implement strStr()
//
//  Created by 李阳 on 2017/3/1.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int k,m=-1;
        if(haystack.empty()&&needle.empty())
            return 0;
        else if(haystack.size()<needle.size())
            return -1;
        k=(int)needle.size();
        bool flag=false;
        int n=0;
        while(n<=(haystack.size()-needle.size()))
        {
            int i;
            for(i=0;i<needle.size();i++)
            {
                if(haystack[n+i]!=needle[i])
                    break;
            }
            if(i==needle.size())
            {
                flag=true;
                m=n;
                break;
            }
            n++;
        }
        return m;
    }
};
int main(int argc, const char * argv[]) {
    string ss,s;
    cin>>ss>>s;
    int k;
    Solution sol;
    k=sol.strStr(ss, s);
    cout<<k;
    return 0;
}
