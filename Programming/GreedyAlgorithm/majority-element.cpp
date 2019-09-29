int Solution::majorityElement(const vector<int> &A) {
    int curr = A[0];
    int count = 1;
    
    for(int i=1;i<A.size();i++) {
        if(count==0) {
            curr = A[i];
        }
        if(A[i] == curr)
            count++;
        else if(A[i] != curr)
            count--;
    }
    
    return curr;
}

