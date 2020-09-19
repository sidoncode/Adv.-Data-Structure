#include<stdio.h>
int visited[10]={0};
void kruskal(int w[10][10],int n)
{
 int min,sum=0,ne=0,i,j,u,v,a,b; 
 while(ne<n-1)
 {
  min=999;
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
    if(w[i][j]<min)
    {
     min=w[i][j];
     u=a=i;
     v=b=j;
    }
  while(visited[u])
   u=visited[u];
  while(visited[v])
   v=visited[v];
  if(u!=v)
  {
   ne++;
   sum+=min;
   printf("\nEdge ( %d , %d ) --> %d",a,b,min);
   visited[v]=u;
  }
  w[a][b]=w[b][a]=999;
 }
 printf("\nCost of minimum spanning tree : %d\n",sum);
}
main()
{
 int w[10][10],n,i,j;
 printf("\nProgram to implement Kruskal's Algorithm : \n");
 printf("\nEnter no. of vertices : ");
 scanf("%d",&n);
 printf("\nEnter the adjacency matrix : \n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&w[i][j]);
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   if(w[i][j]==0)
    w[i][j]=999;
 kruskal(w,n);
}
