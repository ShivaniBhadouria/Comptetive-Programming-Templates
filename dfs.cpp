#include<bits/stdc++.h>
using namespace std;

bool vis[200005] = {0};
// graph waali 
void dfs(int u)
{
   vis[u] = true;  
   for(int i:v[u])
   {
      if(!vis[i])
            dfs(i);
   }

}

// tree waali 
void dfs(int child,int parent)
{
      v[child]=parent; 
      for(int i:v[child])
      {
            if(i!=v[child])
                  dfs(i,child);
      }
}




int main(){
    
   return 0;
}