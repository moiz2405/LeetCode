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
    ListNode* insertionSortList(ListNode* head) {

        ListNode dummy(0); 
        ListNode* current = head; 

        while (current != nullptr) {
            ListNode* nextTemp = current->next; 
            ListNode* prev = &dummy; 
   
            while (prev->next != nullptr && prev->next->val < current->val) {
                prev = prev->next; 
            }

            current->next = prev->next; 
            prev->next = current; 

            current = nextTemp;
        }

        return dummy.next;
    }
};
