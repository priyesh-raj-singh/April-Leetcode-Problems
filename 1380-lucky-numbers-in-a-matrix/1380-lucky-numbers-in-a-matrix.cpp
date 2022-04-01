class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i = 0 ; i<matrix[0].size() ; i++){
            int maxi = 0 ; 
            int idx = 0 ;
            for(int j = 0 ; j<matrix.size() ; j++){
                if(matrix[j][i]>maxi){
                    maxi = matrix[j][i];
                    idx = j;
                }
            }
            int mini = INT_MAX;
            for(int k = 0 ; k<matrix[0].size() ; k++){
                if(matrix[idx][k]<mini){
                    mini = matrix[idx][k];
                }
            }
            if(mini ==maxi)
                ans.push_back(mini);
            
            
        }
        return ans;
        
    }
};