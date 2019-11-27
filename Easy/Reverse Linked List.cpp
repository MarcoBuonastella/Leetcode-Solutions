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
    /*ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;;
        
        while(curr!=nullptr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        return prev;
    }*/
    
     ListNode* reverseList(ListNode* head) {
        return reverseHelper(head, nullptr);   
     }
    
    ListNode* reverseHelper(ListNode* curr, ListNode* prev){
        if(curr == nullptr){
            return prev;    
        }
        else{
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            return reverseHelper(temp,prev);
        }
    }
    
    
    
};