# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if None in head: return head
        count = head
        prev = None
        temp = None
        
        while count != None:
            temp = count.next
            count.next = prev
            prev=count
            count=temp
        return prev