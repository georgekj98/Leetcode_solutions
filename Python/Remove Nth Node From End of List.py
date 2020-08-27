# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        ts = ListNode()
        tf = ListNode()
        ts = head
        tf = head
        for i in range(n+1):
            if tf.next == None and i == (n-1):
                head = head.next
                return head
            tf = tf.next
        
        while( tf != None):
            ts = ts.next
            tf = tf.next
        
        ts.next = ts.next.next
        return head