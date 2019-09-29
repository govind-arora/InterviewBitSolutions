/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode * curr = A;
    
    
    
    while(curr->next != NULL) {
        if(curr->val = curr->next->val) {
            curr->next = curr->next->next;
        }
        else {
            curr = curr->next;
        }
    }
    return A;
}

