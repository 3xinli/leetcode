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
    ListNode* swapPairs(ListNode* head) {
        ListNode* newhead=new ListNode(-1);
        newhead->next=head;
        head=newhead;
        ListNode* hnext=head; 
        while(head->next!=NULL && head->next->next!=NULL)
        {
            hnext=head->next;
            head->next=hnext->next;
            hnext->next=head->next->next;
            head->next->next=hnext;
            head=hnext;
        }
        return newhead->next;
    }
};
