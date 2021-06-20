#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int visited[];
void read_graph(struct node *ad[],int no_nodes);
void print_graph(struct node *ad[],int no_nodes);
void dfs(struct node *ad[],int i);
int main()
{
 int i,j,k,nodes;
 printf("enter the no of node\n");
 scanf("%d",&nodes);
 struct node *adj[nodes];
 for(i=0;i<nodes;i++)
    adj[i]=NULL;
 read_graph(adj,nodes);
 print_graph(adj,nodes);
 for(i=0;i<nodes;i++)
    visited[i]=NULL;
 dfs(adj,0);
 return 0;
}

void read_graph(struct node *ad[],int no_nodes)
{
  struct node *new_node;
  int i,j,k,val;
  for(i=0;i<no_nodes;i++)
  {
      struct node *last=NULL;
      printf("the no of the neighbour nodes of %d\n",i);
      scanf("%d",&k);

      for(j=0;j<k;j++)
      {
          printf("enter the value of %d neigbour of %d",j,i);
          scanf("%d",&val);
          new_node=(struct node *)malloc(sizeof(struct node *));
          new_node->data=val;
          new_node->next=NULL;

          if(ad[i]==NULL)
           {
             ad[i]=new_node;
           }
          else
           {
             last->next=new_node;}
            last=new_node;

      }
  }

}

void print_graph(struct node *ad[],int no_nodes)
{
 struct node *ptr=NULL;
 int i;
 for(i=0;i<no_nodes;i++)
 {
     ptr=ad[i];
     printf("\nthe neighbour of %d are : ",i);
     while(ptr != NULL)
     {
         printf("%d\t",ptr->data);
         ptr=ptr->next;

     }
 }
}
void dfs(struct node *ad[],int i)
{
    struct node *p;
    printf("\n%d",i);
    p=ad[i];
    visited[i]=1;
    while(p!=NULL)
    {
        i=p->data;
        if(!visited[i])
        {
            dfs(ad,i);
        }
            p=p->next;

    }

}
