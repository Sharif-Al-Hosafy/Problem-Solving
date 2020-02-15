/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */

var removeNthFromEnd = function (head, n) {
    var current = head;
    var toBeRemoved = head;
    var cnt = 1;

    if (head.next === null) return null

    while (current.next !== null) {
        current = current.next;
        cnt++;
    }

    current = head;
    var removed = cnt - n;
    cnt = 1;

    while (cnt <= removed) {
        toBeRemoved = toBeRemoved.next;
        cnt++;
    }

    cnt = 1;

    while (cnt < removed) {
        current = current.next;
        cnt++;
    }

    if (toBeRemoved === head) return head.next;

    current.next = toBeRemoved.next;
    return head;
};