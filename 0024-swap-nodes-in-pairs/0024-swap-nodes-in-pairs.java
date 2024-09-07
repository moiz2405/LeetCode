class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode dummy = new ListNode(0, head);
        ListNode prev = dummy, cur = head;
        while (cur != null && cur.next != null) {
            ListNode npn = cur.next.next;
            ListNode second = cur.next;

            second.next = cur;
            cur.next = npn;
            prev.next = second;

            prev = cur;
            cur = npn;
        }
        return dummy.next;        
    }
}