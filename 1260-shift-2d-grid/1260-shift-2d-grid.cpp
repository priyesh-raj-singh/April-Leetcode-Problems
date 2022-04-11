class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        vector<int> v;
        
        for(int i = 0 ; i<row ; i++){
            for(int j = 0 ; j<col ; j++)
                v.push_back(grid[i][j]);
        }
        
        k = k%(row*col);
        
        reverse(v.begin() , v.end());
        reverse(v.begin() , v.begin()+k);
        reverse(v.begin()+k , v.end());
        
        int x = 0 ; 
        for(int i = 0 ; i<row ; i++){
            for(int j = 0 ; j<col ; j++){
                grid[i][j] = v[x];
                x++;
            }
        }
        return grid;
    }
};