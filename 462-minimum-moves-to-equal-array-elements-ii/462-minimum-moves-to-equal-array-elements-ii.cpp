class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int count = 0;
        int median = nums[(nums.size())/2];
        for(int i = 0 ; i<nums.size() ; i++){
            int d = abs(nums[i] - median);
            count+=d;
        }
        return count;
        
    }
};