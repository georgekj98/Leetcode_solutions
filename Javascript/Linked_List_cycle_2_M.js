/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/*
 * @param {ListNode} head
 * @return {ListNode}
 */
 let detectCycle = function(head) {
    let first = head;
    let second = head;
    
    while( second && second.next){
        first = first.next;
        second = second.next.next;
        if( first === second)
           { first = head;
            while( first != second){
                first = first.next;
                second = second.next;
            }
            return first;
            }
        }
    return null;
};