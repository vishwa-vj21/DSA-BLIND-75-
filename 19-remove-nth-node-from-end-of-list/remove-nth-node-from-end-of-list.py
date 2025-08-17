
class Solution(object):
    def removeNthFromEnd(self, head, n):
        dummy=ListNode(0,head)
        l=dummy
        r=head
        while n>0 and r:
            r=r.next
            n-=1
        while r:
            l=l.next
            r=r.next
        l.next=l.next.next
        return dummy.next

        