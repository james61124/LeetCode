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
    ListNode* reverseList(ListNode* head) {
        ListNode* first = head;
        ListNode* second;
        ListNode* third;
        
        
        if(first == NULL){
            return first;
        }
        second = first->next;
        if(second == NULL){
            return first;
        }
        third = second->next;
        if(third == NULL){
            first->next = NULL;
            second->next = first;
            return second;
        }else{
            first->next = NULL;
            while(third->next != NULL){
                second->next = first;
                first = second;
                second = third;
                third = third -> next;
            }
            second->next = first;
            third->next = second;
        }
        
        return third;
        
        
        
    }
};