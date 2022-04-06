class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> ans ;
        unordered_map<string , int> mp;
        for(int i = 0 ; i<arr.size() ; i++) {
            mp[arr[i]]++;
        }
        for(int i = 0 ; i<arr.size() ; i++){
            if(mp.find(arr[i])->second==1){
                ans.push_back(arr[i]);
                continue;
            }
            
        }
        if(k>ans.size())
            return "";
        else
            return ans[k-1];
      
    
        
        
    }
};