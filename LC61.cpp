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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        ListNode *p=head,*q=head;
        while(p)
        {
            len++;
            p=p->next;
        }
        if(len==0)
            return head;
        int rotate=k%len;
        if(rotate==0)
            return head;
        p=head;
        int i=0;
        while(i<rotate)
        {
            q=q->next;
            i++;
        }
        while(q->next)
        {
            p=p->next;
            q=q->next;
        }
        ListNode *newhead=p->next;
        q->next=head;
        p->next=NULL;
        return newhead;
    }
};
