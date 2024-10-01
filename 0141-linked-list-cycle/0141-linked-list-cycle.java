/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        if (head == null || head.next == null) {
            return false;
        }
        
        ListNode slow = head;
        ListNode fast = head;

        // Move slow pointer by 1 step and fast pointer by 2 steps
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;

            // If the two pointers meet, a cycle is detected
            if (slow == fast) {
                return true;
            }
        }

        // If fast pointer reaches the end, no cycle exists
        return false;
    }
}
