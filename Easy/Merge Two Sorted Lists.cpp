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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l1_top = l1;
        ListNode* l2_top = l2;
        ListNode* temp = nullptr;
        ListNode* curr = nullptr;
        ListNode* top = nullptr;
        
        while(l1_top != nullptr || l2_top != nullptr){
        
         if(l1_top == nullptr){
             temp = l2_top->next;
             if(top == nullptr){
                 top = l2_top;
                 curr = top;
             }
             else{
                 curr->next = l2_top;
                 curr = curr->next;
             }
             l2_top = temp;
         }
         else if(l2_top == nullptr){
            temp = l1_top->next;
             if(top == nullptr){
                 top = l1_top;
                 curr = top;
             }
             else{
                 curr->next = l1_top;
                 curr = curr->next;
             }
             l1_top = temp;    
         }
         else{
             if(l1_top->val <= l2_top->val){
                 temp = l1_top->next;
                 if(top == nullptr){
                     top = l1_top;
                     curr = top;
                 }
                 else{
                     curr->next = l1_top;
                     curr = curr->next;
                 }
                l1_top = temp;
        
             }
             else{
                 temp = l2_top->next;
                 if(top == nullptr){
                     top = l2_top;
                     curr = top;
                 }
                 else{
                     curr->next = l2_top;
                     curr = curr->next;
                 }
                l2_top = temp; 
             }
         }
        }
        return top;
    }
};