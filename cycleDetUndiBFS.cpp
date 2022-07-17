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
class sol{
    bool cycle(int i,int v,vector<int>adj[],vector<int>&vis){
        queue<pair<int,int>>q;
        vis[i]=1;
        q.push({i,-1});
        while(!q.empty()){
            int node=q.front().first;
            int prev=q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(prev!=it){
                    return true;
                }
            }
        }
        return false;
    }
public:
bool bfs(int v,vector<int>adj[]){
    vector<int>vis(v+1,0);
    for (int i = 1; i <= v; i++)
    {
        if(!vis[i]){
            if(cycle(i,v,adj,vis)) return true;
        }
    }
    return false;
}
};

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
    bool flag;
    sol ob;
    flag=ob.bfs(n,adj);
    if(flag) yes nll;
    else no nll;
    return 0;
}








