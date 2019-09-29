int Solution::numSetBits(unsigned int A) {
    int count=0;
    
    while(A>0) {
        int temp = A%2;
        A = A/2;
        
        if(temp == 1)
            count++;
    }
    
    return count;
    
}
