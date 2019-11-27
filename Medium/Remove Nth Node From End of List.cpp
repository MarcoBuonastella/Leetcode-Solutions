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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* runner1 = head;
        ListNode* runner2 = head;
        ListNode* prev = nullptr;
        
        while(n > 1){
            runner1 = runner1->next;
            n-=1;
        }
        
        while(runner1->next!=nullptr){
            prev = runner2;
            runner1 = runner1->next;
            runner2 = runner2->next;
        }
        
        if(runner2 == head){
            head = runner2->next;;
        }
        else{
            prev->next = runner2->next;
            runner2 = nullptr;
  
        }
        
        return head;
        
    }
};