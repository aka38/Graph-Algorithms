#include<bits/stdc++.h>
using namespace std;
#define MP         make_pair
#define PB         push_back
#define LL         long long
#define MAX        1000005
#define mod        1000000007
#define debug(a)   cout<<a<<"\n"
#define mx(a,b,c)  max(a,max(b,c))
#define mn(a,b,c)  min(a,min(b,c))
#define pred(a)    printf("%0.6lf",a);
#define rep(i,x,b) for(int i=x;i<b;i++)
#define fast()     ios_base::sync_with_stdio(0)
void dfs( int root,int n)
{

   stack<int> s;
   int vis[n];
   s.push(root);
   while(!stack.empty())
   {
      int node = s.pop();
      if(!vis[node])
       vis[node]=1;
      for(auto u: adj[node])
      {
        if(!vis[u])
          s.push(u);
      }

   }
   return ;
}

int main()
{



}
