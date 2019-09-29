/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    int count=0;
    
    ListNode* temp =A;
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }
    
    struct ListNode * s = (struct ListNode *) malloc (sizeof(struct ListNode));
    s->val = 0;
    s->next = A;
    
    
    ListNode* prev = s;
    ListNode* next = A;
    
    for(int i=0;i<B-1;i++) 
        prev = prev->next;
        
    for(int i=1;i<C;i++)
        next = next->next;
        
    next = next->next;
    
    ListNode * a = prev->next;
    ListNode * b = prev->next;
    ListNode * c = NULL;
    temp = a->next;
    for(int i=0;i<C-B;i++) {
        c = temp->next;
        temp->next = b;
        b = temp;
        temp = c;
    }
    
    a->next = c;
    prev->next = b;
    
    return s->next;
}

