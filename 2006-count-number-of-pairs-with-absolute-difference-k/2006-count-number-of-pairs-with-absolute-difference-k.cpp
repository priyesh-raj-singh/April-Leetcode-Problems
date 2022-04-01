class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0 ;
        unordered_map<int , int> mp;
        for(int i = 0; i<nums.size() ; i++){
            int x = mp[nums[i]+k];
            int y = mp[nums[i]-k];
            count+=x+y;
            mp[nums[i]]++;
        }
        return count;
        
    }
};