class Solution {
public:
    vector<int> dx = {1,0,-1,0};
    vector<int> dy = {0,1,0,-1};
    // (x + 1, y) (x, y + 1) (x - 1, y) (x, y - 1)
    int isValid(vector<vector<int>>& arr,pair<int,int>& newState,pair<int,int>& prevState,int X){
        if(newState.first >= 0 && newState.first < arr.size() && newState.second >= 0 && newState.second < arr[0].size() && 
           abs(arr[newState.first][newState.second] - arr[prevState.first][prevState.second]) <= X) return true;
        return false;
    }
        
    int check(vector<vector<int>>& arr,int maxEffort){
        queue<pair<int,int>> q;
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        vis[0][0] = true;
        q.push({0,0});
        while(!q.empty()){
            auto curr = q.front();  q.pop();
            
            for(int i=0;i<4;i++){
                pair<int,int> newState = {-1,-1};
                newState.first = curr.first + dx[i];
                newState.second = curr.second + dy[i];
               
                if(isValid(arr,newState,curr,maxEffort) && !vis[newState.first][newState.second]){
                   vis[newState.first][newState.second] = true;
                   q.push({newState.first,newState.second});
               }
            }
        }
        return vis[n-1][m-1];
    }
    
    int minimumEffortPath(vector<vector<int>>& arr) {
        int lo = 0, hi = 1e6+1,ans = -1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(check(arr,mid)){
                hi = mid - 1;
                ans = mid;
            }else{
                lo = mid + 1;
            }
        }
        
        return ans;
    }
};