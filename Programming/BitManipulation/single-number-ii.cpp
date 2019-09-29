int Solution::singleNumber(const vector<int> &A) {
    int p=0,q=0;
    
    for(int i=0;i<A.size();i++) {
        p = q & (p ^ A[i]);
        q = p | (q ^ A[i]);
    }
    
    return q;
}

