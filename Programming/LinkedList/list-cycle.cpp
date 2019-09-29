/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    
    ListNode * slow = A;
    ListNode * fast = A;
    
    while(slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
            break;
    }
    
    if(slow != fast)
        return NULL;
        
    int count=1;
    
    ListNode * ptr = slow;
    
    while(ptr->next != slow) {
        ptr = ptr->next;
        count++;
    }
    
    ListNode * head = A;
    ptr = A;
    for(int i=0;i<count;i++) {
        ptr = ptr->next;
    }    
    
    while(head != ptr) {
        ptr = ptr->next;
        head = head->next;
    }
        
    return ptr;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

