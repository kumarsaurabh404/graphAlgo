#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <string>
#include <string.h>
#include <utility>
#include <sstream>
#define tezz   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fore(i, a, n) for (int i = a; i < n; i++)
#define auto(x,v) for(auto &x:v)
#define sor(v) sort(v.begin(),v.end())
#define ob(i, a, n) for (int i = a; i <= n; i++)
#define RFOR(i, a, n) for (int i = a; i >= n; i--)
#define nl "\n"
#define nll << "\n"
#define ll long long
#define vt vector<long long> v
#define st set<long long> s
#define vb(x) v.push_back(x)
#define sp << " " <<
#define esp << " "
#define yes cout<<"YES"
#define no cout<<"NO"
using namespace std;
// class Sol
// {
//     void dfs(int node,vector<int> &vis,vector<int> adj[],vector<int> &storeDfs){
//         storeDfs.push_back(node);
//         vis[node]=1;
//         for(auto it:adj[node]){
//             if(!vis[it]){
//                 dfs(it,vis,adj,storeDfs);
//             }
//         }
//     }
// public:
//     vector<int> bfsOfGraph(int v,vector<int> adj[]){
//         vector<int>storeDfs;
//         vector<int>vis(v+1,0);
//         ob(i,1,v){
//             if(!vis[i]){
//                 dfs(i,vis,adj,storeDfs);
//             }
//         }
//         return storeDfs; 
//     }
// };

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
// #ifdef LOCALFLAG
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int n,e;cin>>n>>e;
//     vector<int>adj[n+1];
//     for (int i = 0; i < e; i++)
//     {
//         int x,y;cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     Sol obj;
//     vector<int>tmp = obj.bfsOfGraph(n,adj);
//     auto(x,tmp) cout<<x esp;
    

//     return 0;
// }

class sol
{
void dfs(int n,vector<int>&vis,vector<int>adj[],vector<int>&storeDfs){
    vis[n]=1;
    storeDfs.push_back(n);
    for(auto it:adj[n]){
        if(!vis[it]){
            dfs(it,vis,adj,storeDfs);
        }
    }
}
public:
    vector<int> dfsGraph(int v,vector<int>adj[]){
        vector<int>storeDfs;
        vector<int>vis(v+1,0);
        for (int i = 1; i <= v; i++)
        {
            if(!vis[i]){
                dfs(i,vis,adj,storeDfs);
            }
        }
        return storeDfs;
    }
};
int main(){
    cout<<"Enter the no. of vertices and edges\n";
    int n,e;cin>>n>>e;
    vector<int>adj[n+1];
    for (int i = 0; i < e; i++)
    {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int>dfs;
    sol ob;
    dfs=ob.dfsGraph(n,adj);
    auto(x,dfs) cout<<x esp;
    return 0;   
}




