int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int n = A.size();
    
    int start = 0;
    int fuel = 0;
    int sum = 0;
    
    for(int i=0;i<n;i++) {
        sum += (A[i]-B[i]);
        fuel += (A[i]-B[i]);
        
        if(fuel < 0) {
            fuel = 0;
            start = i+1;
        }
    }
    
    if(sum>=0)
        return start%n;
    
    return -1;
}

