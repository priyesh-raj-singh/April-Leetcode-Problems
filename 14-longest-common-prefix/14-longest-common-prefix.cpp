class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int len = 0 ;
        int n = str.size();
        
        string ans = "";
   
        sort(str.begin() , str.end());
        string a = str[0];
        string b = str[n-1];
        
        
        while(len<a.length() and a[len]==b[len] ){
            ans+=a[len];
            
           
            len++;
            
        }
        
           return ans;
        
    }
};