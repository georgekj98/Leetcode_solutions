/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* createNode(int value){

    struct ListNode* node =malloc(sizeof(struct ListNode));
    node->val=value;
    node->next=NULL;
    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
     
    struct ListNode* p1=l1;
    struct ListNode* p2=l2;
    /*if(p1==NULL){
        return p2;
    }
    else if(p2==NULL)
    {
        return p1;
    }*/
    struct ListNode* dummy_head= createNode(-1);

    int carry =0;
    struct ListNode* h;
    h=dummy_head;
    
    while(p1!=NULL || p2!=NULL){
        int x=(p1!=NULL) ? p1->val :0;
        int y=(p2!=NULL) ? p2->val :0;
        int s =x+ y + carry;
        struct ListNode* new_node = createNode(s%10);
        h->next=new_node;
        h=new_node;    
        carry=s/10;     
        if(p1!=NULL) p1=p1->next;
        if(p2!=NULL) p2=p2->next;
        
    }
    
    /*if(p2) p1=p2;
    
    while(p1!=NULL){
        int s =p1->val+carry;
        struct ListNode* new_node = createNode(s%10);
        h->next=new_node;
        h=new_node;    
        carry=s/10;     
        p1=p1->next;
    }*/
    if(carry!=0){
        struct ListNode* new_node = createNode(carry);
        h->next=new_node;

    }
    h=dummy_head->next;
   // free(p1);
    //free(p2);
    return h;
    
}