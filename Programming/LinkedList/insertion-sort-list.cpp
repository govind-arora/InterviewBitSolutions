/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Insert(ListNode* head, ListNode * node) {
    if(head == NULL || head->val > node->val) {
        node->next = head;
        return node;
    }
    
    else {
        ListNode * curr = head;
        while(curr->next != NULL && curr->next->val < node->val)
            curr = curr->next;
            
        node->next = curr->next;
        curr->next = node;
    }
}
 
 
 
ListNode* Solution::insertionSortList(ListNode* A) {
    
    ListNode * sorted = NULL;
    
    ListNode * curr = A;
    ListNode * prev = A;
    while(curr != NULL) {
        ListNode * head = A;
        ListNode * next = curr->next;
        
        sorted = Insert(sorted, curr);
    
        curr = next;
    }
}

