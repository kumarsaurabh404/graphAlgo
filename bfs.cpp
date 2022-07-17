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
//     // uptill here aur adjacency list is completed...
//     vector<int>bfs; //stores the final list of nodes....
//     vector<int>vis(n+1,0);
//     ll ct{};                                                                                        
//     ob(i,1,n){
//         if(!vis[i]){
//             ct++;
//             queue<int>q;
//             q.push(i);
//             vis[i]=1;
//             while(!q.empty()){
//                 int node=q.front();
//                 q.pop();
//                 bfs.push_back(node);
//                 for(auto it:adj[node]){
//                     if(!vis[it]){
//                         vis[it]=1;
//                         q.push(it);
//                     }
//                 }
//             }
//         }
//     }
//     if(ct>1){
//         cout<<"Disconnected Graph" nll;
//     }
//     else{
//         cout<<"Connected Graphs" nll;
//     }
//     auto(x,bfs) cout<<x esp;
//     return 0;
// }

vector<int> bfsOfGraph(int v,vector<int>adj[]){
    vector<int>bfs;
    vector<int>vis(v+1,0);
    ll ct{};
    for (int i =1; i <= v; i++)
    {
        if(!vis[i]){
            ct++;
            queue<int>q;
            q.push(i);
            vis[i]=1;
            while (!q.empty())
            {
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:adj[node]){
                    if(!vis[it]){
                        vis[it]=1;
                        q.push(it);
                    }
                }
            }
            
        }
    }
    return bfs;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifdef LOCALFLAG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,e;cin>>n>>e;
    cout<<"No. of edges"<<e nll <<"No.of vertices"<<n nll;
    vector<int>adj[n+1];
    for (int i = 0; i < e; i++)
    {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int>bfs = bfsOfGraph(n,adj);
    for (int i = 0; i < bfs.size(); i++)
    {
        cout<<bfs[i] esp;
    }
    return 0;
}








