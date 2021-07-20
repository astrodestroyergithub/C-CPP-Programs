#include<stdio.h>

struct queue{
	int data;
	struct queue *next;
}*f=NULL, *r=NULL, *nw;

void enqueue()
{
	nw=(struct queue *)malloc(sizeof(struct queue));
	if(nw==NULL)
	{
		printf("Queue is empty");
	}
	else if(f==NULL)
	{
		int x;
		printf("Enter a value");
		scanf("%d",&x);
		nw->data=x;
		f=r=nw;
		nw->next=NULL;
	}
	else
	{
		int x;
		printf("Enter a value");
		scanf("%d",&x);
		nw->data=x;
		nw->next=NULL;
		r->next=nw;
		r=nw;
	}
}

void dequeue()
{
	if(f==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		struct queue *temp;
		temp=f;
		printf("%d is deleted",f->data);
		f=f->next;
		free(temp);
	}
}

int main()
{
	return 0;
}
