class Solution {
public:
    void rev(vector<char> &s , int low , int high){
        if(low>=high)
            return ;
        swap(s[low] , s[high]);
        low++;
        high--;
        
        rev(s , low , high);
    }
    void reverseString(vector<char>& s) {
        return rev(s , 0 , s.size()-1);
        
    }
};