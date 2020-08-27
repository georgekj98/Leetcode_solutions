#include<stdlib.h>
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
struct ListNode* removeElements(struct ListNode* head, int val){
        
        struct ListNode* p =head->next;
        struct ListNode* q = head;
        while(p)
        {
            if( p->val == val)
            {
                q->next = p->next;
                free(p);
                q = q->next;
                struct ListNode* p = q->next;
            }
            else {
                q=p;
                p = p-> next;
            }
        }
        if (head->val == val)
        {
            q = head;
            head=head->next;
            free(q);
        }
        return head;
    }

/*Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5*/