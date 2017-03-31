//
//  main.cpp
//  lc 21. Merge Two Sorted Lists
//
//  Created by 李阳 on 2017/3/1.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head(-1);
        ListNode* temp=&head;
        while(l1&&l2)
        {
            if(l1->val<l2->val)
            {
                temp->next=l1;
                l1=l1->next;
            }
            else
            {
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1)
        {
            temp->next=l1;
        }
        if(l2)
        {
            temp->next=l2;
        }
        return head.next;
    }
};
int main(int argc, const char * argv[]) {
    ListNode s1(1);
    ListNode s2(3);
    ListNode s3(2);
    ListNode s4(4);
    ListNode* l1=&s1;
    l1->next=&s2;
//    while(l1)
//    {
//        cout<<l1->val<<" ";
//        l1=l1->next;
//    }
    ListNode* l2=&s3;
    l2->next=&s4;
//    while(l2)
//    {
//        cout<<l2->val<<" ";
//        l2=l2->next;
//    }
    Solution sol;
    ListNode* l3;
    l3=sol.mergeTwoLists(l1, l2);
    while(l3)
    {
        cout<<l3->val<<endl;
        l3=l3->next;
    }
    return 0;
}
