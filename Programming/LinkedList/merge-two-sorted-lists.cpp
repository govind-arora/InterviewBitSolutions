/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    struct ListNode * newList = (struct ListNode *) malloc (sizeof(struct ListNode *));
    newList->next = NULL;
    newList->val = 0;
    ListNode * ptr = newList;
    
    ListNode * ptr1 = A;
    ListNode * ptr2 = B;
    
    while(ptr1 != NULL && ptr2 != NULL) {
        struct ListNode * temp = (struct ListNode *) malloc (sizeof(struct ListNode *));
        temp->next = NULL;
        
        if(ptr1->val > ptr2->val) {
            temp->val = ptr2->val;
            ptr2 = ptr2->next;
        }
        else {
            temp->val = ptr1->val;
            ptr1 = ptr1->next;
        }
        
        newList->next = temp;
        newList = newList->next;
    }
    
    if(ptr1 != NULL || ptr2 != NULL) {
        if(ptr1 == NULL) {
            newList->next = ptr2;
        }
        else if(ptr2 == NULL) {
            newList->next = ptr1;
        }
    }
    
    return ptr->next;
    
    
}

