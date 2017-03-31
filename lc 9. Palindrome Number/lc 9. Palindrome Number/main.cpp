//
//  main.cpp
//  lc 9. Palindrome Number
//
//  Created by 李阳 on 2017/2/28.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x)
    {
        if(x<0)
            return false;
        else if(x<10)
            return true;
        int inti=x;
        int a[50],k=0;
        do
        {
            a[k++]=x%10;
            x=x/10;
        }while(x!=0);
        long long ss=0;
        for(int i=0;i<k;i++)
        {
            ss=ss*10+a[i];
        }
        if(ss>INT_MAX||ss<INT_MIN)
            return false;
        else if(ss==inti)
            return true;
        else
            return false;
    }
};
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    bool flag;
    Solution sol;
    flag=sol.isPalindrome(n);
    cout<<flag;
    return 0;
}
