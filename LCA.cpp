#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int N= 1e5+10; 
vector<int> g[N];
int vis[N];
int level[N];
void dfs (int node , int parent , int lvl  ){
    level[node] = lvl ;
    par[node][0] = parent; 
 
    for(auto child : adj[node]){
        if(child!=parent){
            dfs(child , node , lvl+1) ; 
        }
    }
}



int lca (int a, int b ){
    
    if(level[a] > level[b] ) swap(a,b) ;
 
    int d = level[b] - level[a] ;
 
    while(d>0){
        int i = log2(d) ;
        b = par[b][i] ;
        d-= (1<<i) ;
    }
 
    if(a==b) return a ;
 
    for(int i = modX ; i>=0 ;i--){
 
        if(par[a][i]!=1 and (par[a][i] != par[b][i]) )
            a=par[a][i] , b=par[b][i] ;
    }
    return par[a][0] ;
}

int main(){
    
   return 0;
}