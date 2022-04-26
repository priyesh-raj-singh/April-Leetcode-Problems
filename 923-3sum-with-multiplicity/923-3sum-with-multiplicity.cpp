class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size();
        long long count = 0 ; 
        unordered_map<int , int> mp;
        for(int i = 0 ; i<n ; i++){
            count+=mp[target - arr[i]];
            count%=1000000007;
            for(int j = 0 ; j<i ; j++){
                mp[arr[i]+arr[j]]++;
            }
        }
        return count;
        
        
    }
};