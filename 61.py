# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        #Should consider two pointers
        if not head: return head
        slow = head
        fast = head
        count = 0
        chead = head
        while chead:
            chead = chead.next
            count += 1
        k %= count
        if k == 0: return head
        for i in range(k):
            fast = fast.next
        while fast.next:
            slow = slow.next
            fast = fast.next
        newHead = slow.next
        slow.next = None
        fast.next = head
        print fast.val
        return newHead
        