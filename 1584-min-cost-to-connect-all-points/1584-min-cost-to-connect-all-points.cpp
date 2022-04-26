class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
vector<vector<pair<int,int>>>graph(points.size());
        for(int i=0;i<points.size();i++){
           for(int j=i+1;j<points.size();j++){
              int u=i;
               int v=j;
               int d=abs(points[i][0]-points[j][0]) + abs(points[i][1]-points[j][1]);
               graph[u].push_back({v,d});
               graph[v].push_back({u,d});
           }
        }
       
        
 	priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p;

        p.push({0,{0,-1}});
     
        vector<bool>vis(points.size(),false);
        int sum=0;
        while(p.size()){
            auto t=p.top();
            p.pop();
            int x=t.second.first;      
            int y=t.second.second;  
          
            if(!vis[x])
                vis[x]=true;
            else{
                continue;
                
            }
         
               if(y!=-1) {   
                   
              sum+=t.first;   //weight
               
               }
            
            for(auto i:graph[x]){
                if(!vis[i.first])
               p.push({i.second,{i.first,x}});
                
            }
            
        }
 	
return sum;  

    }
};