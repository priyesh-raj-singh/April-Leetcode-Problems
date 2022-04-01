class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> ans;
        ans.push_back(-1);
        unordered_map<int , int> mp;
        for(int i = 0 ; i<arr.size() ; i++)
            mp[arr[i]]++;
        
        for(auto it:mp){
            if(it.first==it.second)
                ans.push_back(it.first);
            
        }
        int z = *max_element(ans.begin() , ans.end());
        return z;
        
    }
};