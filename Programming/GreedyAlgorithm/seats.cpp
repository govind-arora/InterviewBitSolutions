int Solution::seats(string A) {
    int n = A.length();
    
    vector<int> temp;
    
    for(int i=0;i<n;i++) {
        if(A[i] == 'x')
            temp.push_back(i);
    }
    
    long long int count=0;
    n = temp.size();
    int mid = n/2;
    int k = 1;
    
    for(int i=mid-1;i>=0;i--) {
        count = (count+temp[mid] - k - temp[i])%10000003;
        k++;
    }
    
    k=1;
    for(int i=mid+1;i<n;i++) {
        count = (count+temp[i] - k - temp[mid])%10000003;
        k++;
    }
    return count;
}

