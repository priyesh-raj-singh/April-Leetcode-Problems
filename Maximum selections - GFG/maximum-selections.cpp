// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range


bool cmp(vector<int> &a , vector<int>&b ){
    return a[1]<b[1];
}
class Solution{
public:
    int max_non_overlapping( vector< vector<int> >& points )
    {
        // code here
        int ans = 0 ; 
        int arrow = 0 ;
        sort(points.begin() , points.end(), cmp);
        for(int i =0 ; i<points.size() ; i++){
            if(ans ==0 || points[i][0]>=arrow){
                ans++;
                arrow = points[i][1];
            }
        }
        return ans;
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

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends