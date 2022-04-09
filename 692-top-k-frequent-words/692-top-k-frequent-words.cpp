class Solution {
public:
    bool static cmp(pair<string , int> &a , pair<string , int> &b){
        if(a.second!=b.second)
            return a.second>b.second; 
        
        return a.first<b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string , int> mp;
        for(int i = 0 ; i<words.size() ; i++)
            mp[words[i]]++;
        
        vector<string> ans;
        
        vector<pair<string , int>> v;
        for(auto it : mp)
            v.push_back({it.first , it.second});
        
        sort(v.begin() , v.end() , cmp);
        
        int temp = 0;
        for( auto it : v){
            if(temp<k){
                ans.push_back(it.first);
                temp++;
            }
        }
        
        return ans;
        
        
    }
};