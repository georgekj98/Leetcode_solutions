class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next
    
    def __str__(self):
        return f"val = {self.val} next = {self.next}"


def append_LL( val, head):
    new = ListNode(val)
    p = head
    while( p.next != None):
        p = p.next
    p.next = new

    return head


def create_LL(db = None):
    if db is None:
        db = [1, 2, 3, 4]
    head = ListNode(db[0])
    for i in db[1:]:
        head = append_LL(i, head)

    return head

def print_LL(head):
    out = ""
    while(head):
        out = out+" -> "+str(head.val)
        head = head.next
    print(out[3:])

def mergeTwoLists(l1,l2):
    p = l1
    q = l2
    head = ListNode(0)
    t = head
    while(p and q):
        if(p.val <= q.val):
            t.next = ListNode(p.val)
            p = p.next
        else:
            t.next = ListNode(q.val)
            q = q.next
        t =t.next
        
    t.next = p or q    
    head = head.next
    return head

l1 = create_LL([1,4,15])
l2 = create_LL([2,3,4,9])
head = mergeTwoLists(l1,l2)
print_LL(head)