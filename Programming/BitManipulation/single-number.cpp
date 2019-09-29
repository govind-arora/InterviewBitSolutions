int Solution::singleNumber(const vector<int> &A) {
    int value = A[0];
    
    for(int i=1;i<A.size();i++) 
        value = value ^ A[i];
    
    return value;
}

