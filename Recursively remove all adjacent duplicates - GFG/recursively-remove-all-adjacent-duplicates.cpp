// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string remove(string s){
        // code here
        string ans;
        int n = s.length();
        if(s[0]!=s[1]){
            ans.push_back(s[0]);
            
        }
        bool flag = false;
        for(int i = 1 ; i<n ; i++){
            while(s[i]==s[i+1]){
                flag = true;
                i++;
            }
            if(i>=0 && s[i]!=s[i-1]){
                ans.push_back(s[i]);
            }
        }
        if(flag==false) return ans;
        return remove(ans);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends