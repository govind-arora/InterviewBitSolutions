/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int count = 0;
    ListNode * curr = A;
    while(curr != NULL) {
        curr = curr->next;
        count++;
    }
    
    B = B%count;
    
    if(count == 1 || B==0) 
        return A;
    
    curr = A;
    for(int i=0;i<count-B-1;i++) {
        curr = curr->next;
    }
    
    ListNode * temp = curr->next;
    curr->next = NULL;
    
    curr = temp;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    
    curr->next = A;
    
    return temp;
    
}

