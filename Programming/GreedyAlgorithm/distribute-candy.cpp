int Solution::candy(vector<int> &A) {
    int n = A.size();
    vector<int> res(n,1);
    
    for(int i=1;i<n;i++) {
        if(A[i] > A[i-1])
            res[i] = res[i-1]+1;
    }
    
    for(int i=n-2;i>=0;i--) {
        if(A[i] > A[i+1])
            res[i] = max(res[i+1]+1, res[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
        count += res[i];
        
    return count;
}

