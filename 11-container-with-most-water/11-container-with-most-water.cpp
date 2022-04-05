class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0 ; 
        int i = 0 ; 
        int j = height.size()-1;
        while(i<j){
            maxi = max(maxi , min(height[i] , height[j])*(j-i));
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return maxi;
        
    }
};