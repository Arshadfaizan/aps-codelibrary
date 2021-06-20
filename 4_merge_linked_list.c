#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;

}list;

list *create(list *l);
list *insert_slist(list *l,int x);
list *crt_ARS(list *l,int x);
void display(list *l);
void merge(list *p1,list *p2);
list *insertARS(list *l,int data);
int main()
{
	list *l1=NULL,*l2=NULL;
    l1=create(l1);
    l2=create(l2);
	printf("LIST 1: ");
	display(l1);
	printf("LIST 2: ");
	display(l2);
	merge(l1,l2);
	return 0;
}


list *create(list *l)
{
	int i,n,x;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	l=NULL;
	for(i=0;i<n;i++)
	{
		printf("enter the element to be inserted\n");
		scanf("%d",&x);
		l=insert_slist(l,x);
	}
    return l;
}


list *insert_slist(list *l,int x)
{
	list *temp,*p;
	temp=crt_ARS(l,x);
	if(l==NULL || x < l->data)
	{
		temp->next=l;
		l=temp;
		return l;
	}
	else{
		p=l;
		while(p->next != NULL && p->next->data < x)
			p=p->next;
		temp->next=p->next;
		p->next=temp;
	}
    return l;
}
list *crt_ARS(list *l,int x)
{
	l=(list *)malloc(sizeof(l));
	l->data=x;
	l->next=NULL;
	return l;

}

void display(list *l)
{
	list *t;
	t=l;

       while(t!=NULL)
	    {
		   printf("%d\t",t->data);
		   t=t->next;
	    }
	printf("\n");
}

void merge(list *p1,list *p2)
{
	list *l3;
	l3=NULL;
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->data < p2->data)
		{
			l3=insertARS(l3,p1->data);
			p1=p1->next;
		}
		else if(p2->data < p1->data)
		{
			l3=insertARS(l3,p2->data);
            p2=p2->next;
		}
		else if(p1->data == p2->data)
		{
			l3=insertARS(l3,p1->data);
			p1=p1->next;
			p2=p2->next;
		}

	}
/*	while(p1!=NULL)
	{
		l3=insertARS(l3,p1->data);
		p1=p1->next;
	}
	while(p2!=NULL)
	{
		l3=insertARS(l3,p2->data);
		p2=p2->next;
	}*/
	printf("Merged list is :");
	display(l3);
}
list *insertARS(list *l,int data)
{
	list *p,*temp;
	temp=crt_ARS(l,data);
	if(l==NULL)
	{
		temp->next=l;
		l=temp;
		return l;
	}
	else
	{
		p=l;
		while(p->next!=NULL)
			p=p->next;
		temp->next=p->next;
		p->next=temp;
	}
  return l;
}
