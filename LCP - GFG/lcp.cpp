// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string a[], int n)
    {
        // code here
        if(n==0){
            return "-1";
            
        }
        else if(n==1){
            return a[0];
        }
        sort(a , a+n);
        string s1 = a[0];
        string s2 = a[n-1];
        int i = 0;
        while(i<s1.length() and s1[i]==s2[i]){
            i++;
        }
        if(i==0){
            return "-1";
        }
        return s1.substr(0,i);
    }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends