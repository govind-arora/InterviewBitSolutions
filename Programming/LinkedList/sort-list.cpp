/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Merge(ListNode* a, ListNode* b) {
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
        
    ListNode* result = NULL;
        
    if(a->val <= b->val) {
        result = a;
        a = a->next;
    }
    else {
        result = b;
        b = b->next;
    }
    
    ListNode* temp = result;
    
    while(a!=NULL && b!=NULL) {
        if(a->val < b->val) {
            temp->next = a;
            a = a->next;
        }
        else {
            temp->next = b;
            b = b->next;
        }
        temp = temp->next;
    }
    
    if(a != NULL) 
        temp->next = a;
    else
        temp->next = b;
    
    return result;
}

ListNode* Solution::sortList(ListNode* A) {
    ListNode * head = A;
    
    if(head==NULL || head->next==NULL)
        return head;
        
    ListNode* slow = head;
    ListNode* fast = head->next;
    
    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    
    fast = slow->next;
    slow->next = NULL;

    return Merge(sortList(head), sortList(fast));
}

