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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* currl1 = l1;
        ListNode* currl2 = l2;
        ListNode* resultHead = nullptr;
        ListNode* resultTail = nullptr;
        int carry = 0;
        
        while(currl1 || currl2){
            int digit = 0;
            int sum = 0;
            if(currl1 && !currl2){
                sum = currl1->val + carry;
                currl1 = currl1->next;
            }
            else if(!currl1 && currl2){
                sum = currl2->val + carry;
                currl2 = currl2->next;    
            }
            else{
                sum = currl1->val + currl2->val + carry; 
                currl1 = currl1->next;
                currl2 = currl2->next;
            }
            
            digit = sum % 10;
            if(digit!=sum){
                carry = 1;
            }
            else{
                carry = 0;
            }
            
            if(resultHead){
                resultTail->next = new ListNode(digit);
                resultTail = resultTail->next;
            }
            else{
                resultHead = new ListNode(digit);
                resultTail = resultHead;
            }
        }
        if(carry){
            resultTail->next = new ListNode(1); 
        }
        return resultHead;
    }
};