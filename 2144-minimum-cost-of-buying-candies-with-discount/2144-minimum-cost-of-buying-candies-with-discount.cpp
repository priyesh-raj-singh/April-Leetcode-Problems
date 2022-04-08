class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int sum = 0 ;
        if(n==1)
            return cost[0];
        
        
        
        sort(cost.begin() , cost.end() , greater<int>());
        int i = 0;
        
        while(i<n){
            if((i+1)%3==0)
                i++;
            else{
                sum+=cost[i];
                i++;
            }
        }
        return sum;
        
        
    }
};