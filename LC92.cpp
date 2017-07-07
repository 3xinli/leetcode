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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* newhead=new ListNode(-1),*pre,*post,*cur,*p;
        newhead->next=head;
        int recur=m-1;
        pre=newhead;
        while(recur)
        {
            pre=pre->next;
            recur--;
        }
        post=pre->next;        
        recur=n-m;
        while(recur)
        {
            cur=pre->next;
            p=post->next;//y
            pre->next=p;
            post->next=p->next;//y
            p->next=cur;
            recur--;
        }
        return newhead->next;
    }
};
