#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;

}list;


list *l =NULL;


list *create(int x)
{
	list *l;
	l=(list *)malloc(sizeof(l));
	l->data=x;
	l->next=NULL;
	return l;

}


list *insert_at_beg(int x)
{
	list *temp;
	temp=create(x);
	if(l==NULL)
	{
		l=temp;
		return l;
	}
	else{
		temp->next=l;
		l=temp;
	}
    return l;
}

list *insert_at_end(int x)
{
	list *t,*p;
	t=create(x);
	p=l;
	if(l==NULL)
	{
		l=t;
		return l;
	}
	else
	{
		while(p->next!=NULL)
		{

           p=p->next;
		}
        p->next=t;
        t->next=NULL;
	}
	return l;
}

int length()
{
	list *t;
	t=l;
	int cnt=0;
	while(t!=NULL)
	{
		cnt++;
        t=t->next;
	}
    return cnt;
}
list *insert_at_pos(int x,int pos)
{
  list *t,*p;
  t=create(x);
  if(pos==1)
  {
  	t->next=l;
  	l=t;
    return l;
  }
  p=l;
  for(int i=1;i<pos-1;i++)
  {
  	p=p->next;
  }
  if(p==NULL)
  {
  	printf("there are less no. of elements\n");
  }
  else
  {
  	t->next=p->next;
  	p->next=t;
  }
  return l;
}
void display()
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

list *delete_at_beg()
{
	list *p;
    if(l==NULL)
    {
    	printf("list is empty the delete operation can not be performed\n");
    	return l;

    }
    else
    {
    	p=l->next;
        free(l);
        l=p;
    }
    return l;
}
list *delete_at_end()
{
    list *p,*q;
    p=l;
	if(l==NULL)
    {
    	printf("list is empty the delete operation can not be performed\n");
    	return l;

    }
    else
    {
    	while(p->next!=NULL)
    	{
    		q=p;
            p=p->next;
    	}
        q->next=NULL;
        free(p);
    }
    return l;
}
list *delete_at_pos(int pos1)
{
	list *p,*q,*t;
	p=l;
	if(l==NULL)
	{
		printf("list is empty the delete operation can not be performed22\n");
    	return l;
	}
	else
	{
		for(int i=0;i<pos1;i++)
		{
		   q=p;
           p=p->next;
		}
        t=p->next;
        q->next=t;
        free(p);
	}
    return l;
}
list *reverse_list()
{
	list *prev,*p,*nxt;
	prev=NULL;
    p=l;
    while(p!=NULL)
    {
    	nxt=p->next;
    	p->next=prev;
    	prev=p;
        p=nxt;
    }
    l=prev;
    return l;

}
list *selection_sort_exchangeData()
{
	list *p,*q;
	int tmp;
	p=l;
    for(p=l;p->next!=NULL;p=p->next)
    {
    	for(q=p->next;q!=NULL;q=q->next)
    	{
    		if(p->data>q->data)
    		{
    			tmp=p->data;
    			p->data=q->data;
    			q->data=tmp;
    		}
    	}
    }
}
list *selection_sort_rarrangeLink()
{
	list *p,*q,*r,*s,*temp;
	for(r=p=l;p->next!=NULL;r=p,p=p->next)
	{
		for(s=q=p->next;q!=NULL;s=q,q=q->next)
		{
			if(p->data>q->data)
			{
				temp=p->next;
				p->next=q->next;
				q->next=temp;
				if(p!=l)
					r->next=q;
				s->next=p;
				if(p==l)
					l=q;
				temp=p;
				p=q;
				q=temp;

			}
		}
	}
    return l;
}
int main()
{

	list *l;
	l=(list *)malloc(sizeof(l));
	int x,op,n,pos,pos1;
	while(1)
	{
		printf("enter the choice\n");
		printf("1.insert at beg\t2.display\t 3.insert at end\t4.length\t 5.insert at position\t 6.Deleta at beg\t7.Delete at end\t 8.Delete at pos \t9.revere list\t10.sorting by exchange data\t11.sorting by rerranging links\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf("enter the value to be added\n");
			        scanf("%d",&x);
			        insert_at_beg(x);
			        break;
			case 2: display();
                    break;
            case 3: printf("enter the value to be added\n");
			        scanf("%d",&x);
			        insert_at_end(x);
			        break;
			case 4: n=length();
			        printf("%d\n",n);
			        break;
			case 5: printf("enter the position \n");
			        scanf("%d",&pos);
			        printf("enter the value to add\n");
			        scanf("%d",&x);
			        insert_at_pos(x,pos);
			        break;
			case 6: delete_at_beg();
			        break;
			case 7: delete_at_end();
			        break;
			case 8: printf("enter the position to be deleted\n");
			        scanf("%d",&pos1);
			        delete_at_pos(pos1);
			        break;
			case 9: reverse_list();
			        break;
			case 10:selection_sort_exchangeData();
                    break;
            case 11:selection_sort_rarrangeLink();
                    break;
            default: exit(0);

		}

	}

	return 0;
}
