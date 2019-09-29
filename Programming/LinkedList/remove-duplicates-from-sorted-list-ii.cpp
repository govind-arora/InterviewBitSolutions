/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    if(A == NULL || A->next == NULL)
        return A;
    
    struct ListNode* s = (struct ListNode *) malloc (sizeof(struct ListNode));
    s->val = 0;
    s->next = A;
    
    ListNode * curr = A;
    ListNode * prev = s;
    
    while(curr != NULL) {
        while((curr->next != NULL) && (curr->val == curr->next->val))
            curr = curr->next;
            
        if(prev->next == curr)
            prev = prev->next;
            
        else 
            prev->next = curr->next;
            
        curr = curr->next;
    }
    
    A = s->next;
    
    return A;
}

