class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin() , nums.end());
        vector<int> ans;
        
        for(auto it: s){
            ans.push_back(it);
        }
        sort(ans.begin() , ans.end() , greater<int>());
        if(ans.size()==1)
            return ans[0];
        else if(ans.size()==2)
            return ans[0];
        return ans[2];
        
    }
};