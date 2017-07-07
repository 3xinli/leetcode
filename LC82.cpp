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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* newhead=new ListNode(-1);//dummy head
        newhead->next=head;
        ListNode* pre=newhead,*p1,*p2;
        int flag,curval;
        while(pre && pre->next && pre->next->next)
        {
            p1=pre->next;
            flag=0;
            curval=p1->val;
            p2=p1->next;
            while(p2 && p2->val==curval)
            {
                p2=p2->next;
                flag=1;
            }
            if(flag==1)
                pre->next=p2;
            else
                pre=p1;
        }
        return newhead->next;
    }
};
