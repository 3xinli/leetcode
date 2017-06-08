/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *newhead=new ListNode(-1000),*p=newhead;//dummy node
        while(l1&&l2)
        {
            //cout<<l1->val<<" "<<l2->val<<" "<<carry<<endl;
            int tmp=l1->val+l2->val+carry;
            p->next=new ListNode(tmp%10);
            //cout<<l1->val<<endl;
            carry=tmp/10;
            l1=l1->next;
            l2=l2->next;
            p=p->next;
        }
        while(l1)
        {
            int tmp=l1->val+carry;
            p->next=new ListNode(tmp%10);
            carry=tmp/10;
            //cout<<l1->val<<" "<<carry<<endl;
            l1=l1->next;
            p=p->next;
        }
        while(l2)
        {
            int tmp=l2->val+carry;
            p->next=new ListNode(tmp%10);
            carry=tmp/10;
            //cout<<p->val<<endl;
            l2=l2->next;
            p=p->next;
        }
        //cout<<carry;
        if(carry==1)
            p->next=new ListNode(1);
        return newhead->next;
    }
};