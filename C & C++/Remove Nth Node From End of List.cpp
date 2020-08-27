#include<stddef.h>
  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ts = head;
        ListNode* tf = head;
        if (head->next == NULL)
            return NULL;
        for( int i = 1; i <= n+1 ; i++)
           {
            if ((tf->next == NULL) &&  (i == n))
            {       
                head = head->next;
                return head;
            }
            tf = tf->next;
           }    
        while( tf != NULL)
        {
            ts=ts->next;
            tf=tf->next;
        }
        ts->next=ts->next->next;
        return head;
        
    }
};