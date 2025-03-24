#include<bits/stdc++.h>
using namespace std;
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
void dfsfunction(int node,int par,vector<int>&depth,vector<int>&parent,vector<vector<int>>&adj){
    parent[node]=par;
    depth[node]=depth[par]+1;
    int n=adj[node].size();
    forloop(0,n){
        int neighbor=adj[node][i];
        if(neighbor!=par){
            dfsfunction(neighbor,node,depth,parent,adj);
        }
    }
}
int findLCAfunction(int current,int node,int n,vector<int>&depth,vector<int>&parent,vector<vector<int>>&adj){
    if(depth[current]<depth[node]){
        swap(current,node);
    }
    while(depth[current]>depth[node]){
        current=parent[current];
    }
    while(current!=node){
        current=parent[current];
        node=parent[node];
    }
    return current;
}
int findLCA(int n,vector<vector<int>>&adj,vector<int>&arr,vector<int>&parent){
    vector<int>depth(n,0);
    dfsfunction(0,-1,depth,parent,adj);
    int currentLCA=arr[0];
    forloop(1,arr.size()){
        currentLCA=findLCAfunction(currentLCA,arr[i],n,depth,parent,adj);
    }
    return currentLCA;


}
int solvefunction(int n,vector<vector<int>>&adj,vector<int>&arr){
    vector<int>parent(n,-1);
    int lca = findLCA(n,adj,arr,parent);
    unordered_set<int>nodes;
    forloop(0,arr.size()){
        int node=arr[i];
        while(node!=lca){
            nodes.insert(node);
            node=parent[node];
        }
    }
    return nodes.size()+1;
}
void solution(){
    int n;cin >> n;
    int m;cin >> m;
    vector<vector<int>>adj(n);
    vector<int>arr;
    forloop(0,n-1){
        int u;int v;
        cin >> u >> v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    forloop(0,m){int x;cin >> x;arr.push_back(x-1);}
    int ans=solvefunction(n,adj,arr);
    cout << ans << "\n";

}
int main(){

    solution();
}