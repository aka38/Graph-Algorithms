void bfs( int root)
{
   for(int i=0;i<n;i++)
   {
      dis[i]=MAX_INT;
    }
   queue <int> q;
   q.push(root);
   dis[root] = 1;
   while(!q.empty()){
   
   int x= q.front();
   q.pop();
   for(auto u : adj[x] )
   {
      if(  dis[u] == MAX_int )
      {
         dis[u] = dis[x] + 1;
         q.push( u );
      }
   }
}
      
