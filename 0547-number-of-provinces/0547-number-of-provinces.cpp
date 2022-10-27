class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<int>vis(v,0);
        int count=0;
        for(int i=0;i<v;i++)
        {
            
            if(!vis[i])
            {
                count++;
                vis[i]=1;
                
           
            }
                  queue<int>q;
            q.push(i);
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
               for(int j=0;j<isConnected[x].size();j++)
               {
                    if(!vis[j]&&isConnected[x][j]==1){
                        vis[j]=1;
                   q.push(j);
                    }
               }
            }
           
            
        }
        return count;
    }
};