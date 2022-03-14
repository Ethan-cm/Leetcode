# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
                
        solution = n = ListNode(0) #create a solution list
        carry = 0
        
        while l1 or l2 or carry: #while the two lists exist or there remains a carry
            v1 = v2 = 0
            
            if l1:
                v1 = l1.val
                l1 = l1.val
            if l2:
                v2 = l2.val
                l2 = l2.val
            
            total = v1+v2+carry #add the two values together, and if they are greater than 10 we need to carry it over to the next iteration
            if total >= 10:
                carry  = 1
                total %= 10
            else:
                carry = 0 
           
            n.next = ListNode(total)
            n = n.next

            
        return solution.next