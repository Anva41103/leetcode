class Solution {
public:
    void dfsr(int n,vector <int> g[],int vis[] )
{
    vis[n]=1;
    for(auto it: g[n])
    {
        if(!vis[it])
        {
           dfsr(it,g,vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int c=0;
        int s= isConnected.size();
        vector <int> g[s];
        for(int i=0;i<s;i++)
        {
          for(int j=0;j<s;j++)
          {
              if(isConnected[i][j]==1&& i!=j)
              {
                  g[i].push_back(j);
                  g[j].push_back(i);
              }
          }
        }
        int vis[s];
        for(int i=0;i<s;i++)
        { 
            vis[i]=0;
        }
        for(int j=0;j<s;j++)
        {
            if(!vis[j])  {c++; dfsr(j,g,vis);}
        }
        return c;
    }
};