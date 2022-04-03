// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    string s = to_string(n);
    string ans = "";
    for(int i = 0 ; i<s.size() ; i++){
        if(s[i]=='0'){
            ans+='5';
            
        }
        else{
            ans+=s[i];
        }
        
    }
    int x = stoi(ans);
    return x;
}