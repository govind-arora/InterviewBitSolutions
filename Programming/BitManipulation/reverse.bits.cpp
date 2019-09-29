unsigned int Solution::reverse(unsigned int A) {
    
    int count=0;
    unsigned int temp = A; 
    while(A>0) {
        count++;
        A = A/2;
    }
    
    temp = (temp<<(32-count));
    return temp;
}

