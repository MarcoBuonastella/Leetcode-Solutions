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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        // copy heads
        ListNode* temp = headA;
        ListNode* temp2 = headB;
        
        // if either list is null return null
        if(temp == nullptr || temp2 == nullptr)
        {
            return nullptr;
        }
        
        
        while(temp->next != nullptr || temp2->next != nullptr)
        {
            if(temp->next != nullptr)
            {
                temp = temp->next;
            }
            if(temp2->next != nullptr)
            {
                temp2 = temp2->next;
            }
        }
        
        // lists did not interset since they did not finish at the same node
        if(temp != temp2)
        {
            return nullptr;
        }
        
        temp = headA;
        temp2 = headB;
        int tempHead = 0; // signifies it started assigned to headA
        int temp2Head = 1; // signifies it started assigned to headB
        
        while(temp != temp2)
        {
            if(temp == nullptr)
            {
                if(tempHead == 0)
                {
                    temp = headB;
                    tempHead = 1;
                }
                else
                {
                   temp = headA;
                   tempHead = 0; 
                }
            }
            else{
                temp = temp->next;
            }
            if(temp2 == nullptr)
            {
                if(temp2Head == 0)
                {
                    temp2 = headB;
                    temp2Head = 1;
                }
                else
                {
                   temp2 = headA;
                   temp2Head = 0; 
                }
            }
            else{
                temp2 = temp2->next;
            }               
        }
        
        return temp;
         
    }
};