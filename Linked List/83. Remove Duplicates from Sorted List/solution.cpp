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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        // we can also solve this doing by two pointer fast, slow nodes
        ListNode* current = head;
        
        
        
        // let's try to solve it using unordered_set
        while(current != nullptr && current->next != nullptr)
        {
            if(current->next->val == current->val)
            {
                current->next = current->next->next;
                continue;
            }
            
            //otherwise, you will keep iterating the linked list
            current = current->next;
        }
        
        return head;
        
    }
    
    
    
};
