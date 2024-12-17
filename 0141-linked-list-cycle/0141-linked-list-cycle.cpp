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
    bool hasCycle(ListNode *head) {
        if(head ==NULL or head->next == NULL){return false;}
        //fast and slow pointer approach
        ListNode *h1 = head; //fast
        ListNode *h2 = head; //slow

        while(h1!=NULL and h1->next!=NULL){
            h1 = h1->next->next;
            h2 = h2->next;
            if(h1==h2){return true;}

        }
        return false;
    }
};