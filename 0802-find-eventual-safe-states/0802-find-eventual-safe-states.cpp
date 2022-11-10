class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>outgoing(graph.size(),0);
        unordered_map<int,vector<int>>m;
        for(int i=0;i<graph.size();i++)
        {
            outgoing[i]=graph[i].size();
            for(auto j:graph[i])
                m[j].push_back(i);
        }
        queue<int>q;
        for(int i=0;i<graph.size();i++)
        if(outgoing[i]==0)
            q.push(i);
        
        vector<int>ans;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto i:m[node]){
                outgoing[i]--;
                if(outgoing[i]==0)
                    q.push(i);
            }
            
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};