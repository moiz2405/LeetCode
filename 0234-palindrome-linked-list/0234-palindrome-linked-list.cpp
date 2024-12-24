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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL){return true;}
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast){
            slow = slow->next;
        }
        // reversing the righthalf
        ListNode *prev = NULL;
        ListNode *next = NULL;
        
        while(slow){
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        // compare start to mid and mid to end
        ListNode *t1 = head;
        while(t1 and prev){
            if(t1->val != prev->val){
                return false;
             }
             t1 = t1->next;
             prev = prev->next;
        }
return true;
    }
};