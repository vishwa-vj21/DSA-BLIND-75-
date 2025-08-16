
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        dummy=ListNode()
        res=dummy

        while list1 and list2:
            if list1.val<list2.val:
                res.next=list1
                list1=list1.next
            else:
                res.next=list2
                list2=list2.next
            res=res.next
        if list1:
            res.next=list1
        elif list2:
            res.next=list2
        return dummy.next



        