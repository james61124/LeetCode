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
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=-1;i<n;i++){
            if(fast!=NULL)fast = fast->next;
            else return head->next;
        }
        while(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;

    }
};