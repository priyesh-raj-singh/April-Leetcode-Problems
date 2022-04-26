class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
         
        for(int i = 0 ; i<grid.size() ; i++){
            for(int j = 0 ; j<grid[0].size() ; j++)
                v.push_back(grid[i][j]);
        }
        sort(v.begin() , v.end());
        int median = v[(v.size())/2];
        int count = 0 ;
        for(int i = 0 ; i<v.size() ; i++){
            int d = abs(v[i] - median);
            if(d%x!=0)
                return -1;
            count+=d/x;
            
            
        }
        return count;
        
    }
};