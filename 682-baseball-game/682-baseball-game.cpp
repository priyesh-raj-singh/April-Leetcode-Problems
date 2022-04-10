class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        int n = ops.size();
        for(int i = 0 ; i<n ; i++){
            if(ops[i]=="+"){
                int a = v[v.size()-2]+v[v.size()-1];
                v.push_back(a);
            }
            
            else if(ops[i]=="D"){
                int c = 2*(v[v.size()-1]);
                v.push_back(c);
            }
            
            else if(ops[i]=="C")
                v.pop_back();
            
            else
                v.push_back(stoi(ops[i]));
                
        }
        
        int ans = 0 ;
        for(int i = 0 ; i<v.size() ; i++)
            ans+=v[i];
        
        return ans;
        
    }
};