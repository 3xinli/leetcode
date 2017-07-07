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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL)
            return head;
        ListNode* lhead=NULL,*ghead=NULL,*lp=NULL,*gp=NULL,*p=head;
        int flag1=0,flag2=0;
        while(p)
        {
            if(p->val<x && flag1==0)
            {
                lhead=p;
                flag1=1;
            }
            else if(p->val>=x && flag2==0)
            {
                ghead=p;
                flag2=1;
            }
            else if(flag1==1 && flag2==1)
                break;
            p=p->next;
        }
        p=head;
        lp=lhead;
        gp=ghead;
        while(p)
        {
            if(p->val<x && p!=lhead)
            {
                lp->next=p;
                lp=p;
            }
            else if(p->val>=x && p!=ghead)
            {
                gp->next=p;
                gp=p;
            }
            p=p->next;
        }
        if(lp && gp)
        {
            lp->next=ghead;
            gp->next=NULL;
            return lhead;
        }
        else if(gp)
            return ghead;
        else if(lp)
            return lhead;
    }
};
