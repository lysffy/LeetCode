//
//  main.cpp
//  lc 2. Add Two Numbers
//
//  Created by 李阳 on 2017/3/23.
//  Copyright © 2017年 Xcode. All rights reserved.
//

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode l3(-1);
        ListNode *l4=&l3;
        int num=0;
        while(l1||l2||num)
        {
            int sum=(l1?l1->val:0)+(l2?l2->val:0)+num;
            num=sum/10;
            l4->next=new ListNode(sum%10);
            l4=l4->next;
            l1=l1?l1->next:l1;
            l2=l2?l2->next:l2;
        }
        return l3.next;
    }
};
int main(int argc, const char * argv[]) {
    ListNode l1(2);
    ListNode *p=&l1;
    p->next=new ListNode(4);
    p=p->next;
    p->next=new ListNode(3);
    ListNode l2(5);
    ListNode *q=&l2;
    q->next=new ListNode(6);
    q=q->next;
    q->next=new ListNode(4);
    Solution sol;
    ListNode *m;
    m=sol.addTwoNumbers(&l1, &l2);
    while(m)
    {
        cout<<m->val<<" ";
        m=m->next;
    }
    return 0;
}
