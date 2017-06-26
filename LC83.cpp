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
        ListNode *p1=head,*p2=head;
        if(!p1)
            return head;
        while(p1->next)
        {
            p2=p1->next;
            while(p2 && p2->val==p1->val)
                p2=p2->next;
            p1->next=p2;
            p1=p2;
            if(!p1)
                break;
        }
        return head;
    }
};
