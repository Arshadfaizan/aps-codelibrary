#include <stdio.h>
#include <stdlib.h>

void dfs(int);
int g[10][10],visited[10],n;
int main()
{
   int i,j,k;
   printf("enter the no of vertices\n");
   scanf("%d",&n);
   printf(" enter the adjacency matrix of the graph\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&g[i][j]);
       }
   }
   for(i=0;i<n;i++)
   {
       visited[i]=0;
   }
   dfs(0);
    return 0;
}

void dfs(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;
    for(j=0;j<n;j++)
    {
        if(!visited[j]&&g[i][j]==1)
            dfs(j);
    }


}
