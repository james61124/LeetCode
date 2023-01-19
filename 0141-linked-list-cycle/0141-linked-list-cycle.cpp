/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int count = 0;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL){
            if(fast==slow &&　count!=0){
                return true;
            }
            fast = fast->next;
            if(fast!=NULL) fast = fast->next;
            if(slow!=NULL) slow = slow->next;
            count++;
        }
        return false;
    }
};