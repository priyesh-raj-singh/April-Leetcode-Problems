class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string word;
        string ans;
        while(str>>word){
            reverse(word.begin() , word.end());
            ans+=word;
           ans+=" ";
            
        }
        int n = ans.size();
        
        
        return ans.substr(0 , n-1);
        
    }
};