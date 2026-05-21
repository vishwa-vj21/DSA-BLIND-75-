/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start = head;
        int count=0;
        while(start!=nullptr){
            count++;
            start=start->next;
        }
        if(n==count) return head->next;
        start=head;
        for(int i=0; i<count-n-1; i++){
            start=start->next;
        }
        start->next=start->next->next;
        return head;


    }
};