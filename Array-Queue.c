#include<stdio.h>

struct queue
{
	char name[100];
	int age;
	float cgpa;
};



int main()
{
	int size=5, f=-1, r=-1;
	struct queue A[size];
	
	void enqueue()
	{
		if(r>=size-1)
		{
			printf("Queue overflow");
		}
		else if(f==-1)
		{
			struct queue x;
			printf("Enter details :\n");
			scanf("%s",&x.name);
			scanf("%d",&x.age);
			scanf("%f",&x.cgpa);
			f=0; r++;
			A[r]=x;
		}
		else
		{
			struct queue x;
			printf("Enter details :\n");
			scanf("%s",&x.name);
			scanf("%d",&x.age);
			scanf("%f",&x.cgpa);
			r++;
			A[r]=x;
		}
	}
	
	
	void dequeue()
	{
		if(f==-1)
		{
			printf("Queue underflow");
		}
		else
		{
			if(f==r)
			{
				printf("The deleted element is :\n");
				printf("%s\n%d\n%f",A[f].name, A[f].age, A[f].cgpa);
				f=r=-1;
			}
			else
			{
				printf("The deleted element is :\n");
				printf("%s\n%d\n%f",A[f].name, A[f].age, A[f].cgpa);
				f++;
			}
		}
	}
	
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	
	return 0;
}
