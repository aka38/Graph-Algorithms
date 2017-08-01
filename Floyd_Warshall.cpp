
void Floyd-Warshal(){
	
  for(int i=0;i<n;i++) d[v][v] = 0 ;
    
    
    for(int k=0;k<n;k++)   // Pick all vertices as source one by one.
     for(int i=0;i<n;i++)  // Pick all vertices as destination one by one.
        for(int j=0;j<n;j++) 
          d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
        
        }
