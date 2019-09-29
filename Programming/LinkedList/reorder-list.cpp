/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    ListNode * slow = A;
    ListNode * fast = A;
    
    if(A->next == NULL)
        return A;
    
    while(fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    ListNode * mid = slow;
    ListNode * curr = slow->next;
    
    while(curr->next) {
        ListNode * temp = curr->next;
        curr->next = temp->next;
        temp->next = mid->next;
        mid->next = temp;
    }
    
    ListNode * ptr1 = A;
    ListNode * ptr2 = mid->next;
    
    while(ptr1 != mid) {
        mid->next = ptr2->next;
        ptr2->next = ptr1->next;
        ptr1->next = ptr2;
        ptr1 = ptr2->next;
        ptr2 = mid->next;

    }
    
    return A;
}

