class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0)
    		return false;
        long i = 0 ; 
        long j = sqrt(c);
        while(i<=j){
            if(i*i + j*j <c)
                i++;
            else if(i*i + j*j > c)
                j--;
            
            else 
                return true;
        }
        return false;
    }
};