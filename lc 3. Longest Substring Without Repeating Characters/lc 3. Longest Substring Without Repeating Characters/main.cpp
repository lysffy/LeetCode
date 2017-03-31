//
//  main.cpp
//  lc 3. Longest Substring Without Repeating Characters
//
//  Created by 李阳 on 2017/3/24.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
        {
            return 0;
        }
        int Slength=(int)s.length();
        int num=0;
        for(int i=0;i<Slength-num;i++)
        {
            int temp=1;
            int j;
            string ss="";
            ss=ss+s[i];
            for(j=i;j<Slength-1;j++)
            {
                bool flag=true;
                for(int k=0;k<temp;k++)
                {
                    if(s[j+1]==ss[k])
                    {
                        flag=false;
                        if(temp>num)
                        {
                            num=temp;
                        }
                        break;
                    }
                }
                if(flag==false)
                {
                    break;
                }
                else
                {
                    temp++;
                    ss+=s[j+1];
                }
            }
            if(j==Slength-1)
            {
                num=temp;
            }
        }
        return num;
    }
};

int main(int argc, const char * argv[]) {
    Solution sol;
    string str;
    cin>>str;
    int num=sol.lengthOfLongestSubstring(str);
    cout<<num<<endl;
    return 0;
}
