//
//  main.cpp
//  lc 20. Valid Parentheses
//
//  Created by 李阳 on 2017/3/1.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>ss;
        bool flag=true;
        if(s.empty())
            return 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                ss.push(s[i]);
            }
            else if(s[i]==')')
            {
                if(ss.empty())
                {
                    flag=false;
                    break;
                }
                char c=ss.top();
                if(c=='(')
                {
                    ss.pop();
                }
                else
                {
                    flag=false;
                    break;
                }
            }
            else if(s[i]==']')
            {
                if(ss.empty())
                {
                    flag=false;
                    break;
                }
                char c=ss.top();
                if(c=='[')
                {
                    ss.pop();
                }
                else
                {
                    flag=false;
                    break;
                }
            }
            else
            {
                if(ss.empty())
                {
                    flag=false;
                    break;
                }
                char c=ss.top();
                if(c=='{')
                {
                    ss.pop();
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(ss.empty())
            return flag;
        else
            return false;
    }
};
int main(int argc, const char * argv[]) {
    string s;
    cin>>s;
    bool flag;
    Solution sol;
    flag=sol.isValid(s);
    cout<<flag;
    return 0;
}
