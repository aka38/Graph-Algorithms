#include<bits/stdc++.h>
using namespace std;
#define MP          make_pair
#define PB          push_back
#define LL          long long
#define MAX         1000005
#define mod         1000000007
#define debug(a)    cout<<a<<"\n"
#define sd(a)       scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define ss(a)       scanf("%s",&a)
#define sld(a)      scanf("%lld",&a)
#define mx(a,b,c)   max(a,max(b,c))
#define mn(a,b,c)   min(a,min(b,c))
#define pred(a)     printf("%0.6lf",a)
#define rep(i,x,b)  for(int i=x;i<b;i++)
#define fast()      ios_base::sync_with_stdio(0)
#define chloop(i,j) cout<<"i:"<<i<<" j:"<<j<<"\n"

int inf=1000000;

vector<pair<int,int> > adj[10005];
bool mark[10005];
int d[10005],n;
void dijikstra(int v)
{
    fill(d,d+n+1,inf);
    fill(mark,mark+n+1,false);
    d[v]=0;
    int u;
    priority_queue<   pair<int,int>  , vector < pair<int,int> >  , greater<pair<int,int> > > pq; // smallest d[i] at top
    pq.push(MP(d[v],v));    // distance from v and the vertex v;
    while(!pq.empty())
    {
         u=pq.top().second;  // the top vertex i.e the vertex with minimum value of d[vertex] present in pq;
       
        pq.pop();
        if(mark[u])
        continue;
        else mark[u]=true;
        for(auto p:adj[u])
        {
            if(d[p.first]>d[u]+p.second)
            {
               d[p.first]=d[u]+p.second;
               pq.push(MP(d[p.first],p.first));
            }
        }


    }

}

int main()
{
fast();
int t;
cin>>t;
while(t--)
{
    int e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].PB(MP(b,c));    //adj[b].PB(MP(a,c));
        
        
    }
    int des,sou;
    cin>>sou>>des;
    dijikstra(sou);
    if (d[des]!=1000000) printf("%d\n",d[des]);
    else  printf("NO\n");
    for(int i=0;i<=n;i++)adj[i].clear();

}

}
