//
//  main.cpp
//  lc 7. Reverse Integer
//
//  Created by 李阳 on 2017/2/27.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int aa[100100],n=0,kk=0;
        long long sum=0;
        if(x==0)
        {
            return 0;
        }
        else
        {
            do
            {
                aa[n++]=x%10;
                x=x/10;
            }while(x!=0);
            for(int i=0;i<n;i++)
            {
                sum=sum*10+aa[i];
            }
        }
        if (sum > INT_MAX || sum < INT_MIN){
            return 0;
        }
        else
        {
            kk=(int)sum;
            return sum;
        }
    }
};
int main(int argc, const char * argv[]) {
    Solution sol;
    int k;
    cin>>k;
    int ss;
    ss=sol.reverse(k);
    cout<<ss;
    return 0;
}
