class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i = 0 ;
        int n = tickets.size();
        int ans = 0;
        while(i<n){
            if(i>k){
                ans+=min(tickets[i] , tickets[k]-1);
            }
            else if(i<k){
                ans+=min(tickets[i] , tickets[k]);
            }
            else
                ans+=tickets[k];
            i++;
        }
        return ans;
        
    }
};