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
    bool isPalindrome(ListNode* head) {
        std::stack<int> stack;
        ListNode* runner1 = head;
        ListNode* runner2 = head;
        
        if(head == nullptr){
            return true;
        }
        
        while(runner1->next != nullptr && runner1->next->next != nullptr){
            //stack.push(runner2->val);
            runner2 = runner2->next;
            runner1 = runner1->next->next;
        }
        
        //odd list
        if(runner1->next == nullptr){
            runner2 = runner2->next;     
        }
        
        //even list
        else if(runner1->next->next == nullptr){
            //stack.push(runner2->val);
            runner2 = runner2->next;
        }
        
        while(runner2 != nullptr){
                if(runner2->val!=stack.top()){
                    return false;
                }
                else{
                    runner2 = runner2->next;
                    //stack.pop();
                }
        }
        return true;
        
    }
};