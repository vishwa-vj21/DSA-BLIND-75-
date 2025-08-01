
class Solution(object):
    def reverseList(self, head):
        cur, prev= head, None

        while cur:
            temp = cur.next
            cur.next=prev
            prev=cur
            cur=temp
        return prev
        
            
        