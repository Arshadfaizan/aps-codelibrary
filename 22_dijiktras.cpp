
#include<iostream>
using namespace std;
#define V 5  
#define INFINITY 999
int min_Dist(int dist[], bool visited[])   

{
	int min=INFINITY,index;                
	for(int v=1;v<=V;v++)
	{
		if(visited[v]==false &&dist[v]<=min)      
		{
			min=dist[v];
			index=v;
		}
	}
	return index;
}
void Dijkstra(int cost[V][V],int src) 
	int dist[V];                             
	bool visited[V];
	for(int i=1;i<=V;i++)                    
	{
		dist[i]=INFINITY;
		visited[i]=false;	
	}

	dist[src]=0;                                   
	for(int c=2;c<=V;c++)                           
	{
		
		int u=min_Dist(dist,visited);            distance
		visited[u]=true;                          //vertex u is now visited 
		for(int v=1;v<=V;v++)                    

		{
			if(!visited[v] && cost[u][v] &&dist[u]+cost[u][v]<dist[v])
			dist[v]=dist[u]+cost[u][v];
		}
	}
	
	cout<<"The shortest path  "<<src<<" to all the other vertices is: \n";
	for(int i=1;i<=V;i++)                      
	{
	   if(i!=src)
	   cout<<"source:"<<src<<"\t destination:"<<i<<"\t MinCost is:"<<dist[i]<<"\n";
	}
}
int main()
{
	int cost[V][V], i,j, s;
	cout<<"\n Enter the cost matrix weights";
	for(i=1;i<=V;i++)     
          for(j=1;j<=V;j++)
          {
cin>>cost[i][j];
			
             if(cost[i][j]==0)     
               cost[i][j]=INFINITY;    
           }
cout<<"\n Enter the Source Vertex"; 
cin>>s;

	Dijkstra(cost,s);
	return 0;	
}

	
