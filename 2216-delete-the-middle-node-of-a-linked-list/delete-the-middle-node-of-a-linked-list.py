# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteMiddle(self, head):
        if head is None or head.next is None:
            return None

        count=0
        curr=head
        while curr:
            count+=1
            curr=curr.next
        n=count//2
        curr=head
        for i in range(n - 1):
            curr = curr.next

        # Delete middle node
        curr.next = curr.next.next

        return head