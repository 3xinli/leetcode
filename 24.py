# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        dummy = ListNode(-1)
        dummy.next = head
        cur = dummy
        while cur.next and cur.next.next:
           post = cur.next.next.next
           t1 = cur.next
           t2 = cur.next.next
           cur.next = t2
           t2.next = t1
           t1.next = post
           cur = t1
        return dummy.next
           
    