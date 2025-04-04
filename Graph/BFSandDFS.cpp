#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &adj, int s){
    queue<int> q;
    vector<bool> visited(adj.size(), false);
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int curr = q.front();
        cout<<curr<<" ";
        q.pop();
        for(auto x: adj[curr]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }
        }
    }
    cout<<endl;
}

void DFSRec(vector<vector<int>> &adj, vector<bool> &visited, int s){
    visited[s]=true;
    cout<<s<<" ";
    for(auto i: adj[s]){
        if(visited[i]==false){
            visited[i]=true;
            DFSRec(adj, visited, i);
        }
    }
    
}
void dfs(vector<vector<int>> &adj, int s){
    vector<bool> visited(adj.size(), false);
    DFSRec(adj,visited,s);
    cout<<endl;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s;
    cin>>s;
    bfs(adj, s);
    dfs(adj, s);
    return 0;
}
