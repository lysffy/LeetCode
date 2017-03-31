//
//  main.cpp
//  lc 38. Count and Say
//
//  Created by 李阳 on 2017/3/23.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n==0)
        {
            return "";
        }
        string str="1";
        while(--n)
        {
            string temp="";
            for(int i=0;i<str.length();i++)
            {
                int count=1;
                while(i+1<str.length()&&str[i]==str[i+1])
                {
                    count++;
                    i++;
                }
                temp+=to_string(count)+str[i];
            }
            str=temp;
        }
        return str;
    }
};
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    Solution sol;
    string str=sol.countAndSay(n);
    cout<<str<<endl;
    return 0;
}
