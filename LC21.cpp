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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head;
        if(!l1&&l2)
            head=l2;
        else if(l1&&!l2)
            head=l1;
        else if(!l1&&!l2)
            head=NULL;
        else
        {
            if(l1->val<=l2->val)
                head=l1;
            else
                head=l2;
        }
        while(l1!=NULL && l2!=NULL)
        {
            ListNode *l1next=l1->next,*l2next=l2->next;
            if(l1->val<=l2->val)
            {
                if(l1next!=NULL && l1next->val>l2->val || l1next==NULL)
                    l1->next=l2;
                l1=l1next;
            }
            else
            {
                if(l2next!=NULL && l2next->val>=l1->val || l2next==NULL)
                    l2->next=l1;
                l2=l2next;
            }
        }
        return head;
    }
};
