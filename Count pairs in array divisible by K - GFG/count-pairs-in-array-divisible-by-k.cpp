// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int countKdivPairs(int arr[], int n, int k)
    {
        //code here
        unordered_map<int , int> mp;
        int count = 0 ; 
        for(int i =0 ; i<n ; i++){
            int rem = arr[i]%k;
            int curr = (k-rem)%k;
            auto it = mp.find(curr);
            if(it !=mp.end()){
                count+=mp[curr];
            }
            mp[rem]++;
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends