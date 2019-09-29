/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int count = 0;
    ListNode * temp = A;
    
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }
    
    
    if(count == 1 && B==1)
        return NULL;
    if(count == 0 || B==0)
        return NULL;
    if(count == 1 && B==0)
        return A;
    
    temp = A;
    
    if(count-B-1 == 0 || B>count)
        return A->next;
    
    for(int i=0;i<count-B-1;i++)
        temp = temp->next;
        
    temp->next = temp->next->next;
    
    return A;
}

