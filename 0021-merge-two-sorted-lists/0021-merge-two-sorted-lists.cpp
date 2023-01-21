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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* one = list1;
        ListNode* two = list2;
        ListNode* cur;
        ListNode* start;
        int count = 0;
        if(one==NULL && two==NULL){
            return list1;
        }else if(one==NULL && two!=NULL){
            return two;
        }else if(one!=NULL && two==NULL){
            return one;
        }else{
            if(one->val<=two->val){
                start = one;
                cur = one;
            }else{
                start = two;
                cur = two;
            }
            while(one!=NULL && two!=NULL){
                cout<<cur->val<<endl;
                if(cur==one){
                    if(cur->next!=NULL){
                        if(cur->next->val<=two->val){
                            cur = cur->next;
                            one = one->next;
                        }else{
                            cur = cur->next;
                            one->next = two;
                            one = cur;
                            cur = two;
                        }
                    }else{
                        cur->next = two;
                        one = NULL;
                    }
                    
                }else if(cur==two){
                    if(cur->next!=NULL){
                        if(cur->next->val<=one->val){
                            cur = cur->next;
                            two = two->next;
                        }else{
                            cur = cur->next;
                            two->next = one;
                            two = cur;
                            cur = one;
                        }
                    }else{
                        cur->next = one;
                        two = NULL;
                    }
                    
                }
            }
                
        }
        
        return start;
        
    }
};