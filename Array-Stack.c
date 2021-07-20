#include<stdio.h>

struct stack
{
	char name[100];
	int age;
	float cgpa;
};



int main()
{
	int size=5, top=-1;
	struct stack A[size];
	
	void push()
	{
		if(top==size-1)
		{
			printf("Stack overflow");
		}
		else
		{
			struct stack x;
			printf("Enter details :\n");
			gets(x.name);
			scanf("%d%f",&x.age,&x.cgpa);
			top++;
			A[top]=x;
		}
	}
	
	
	void pop()
	{
		if(top==-1)
		{
			printf("Stack underflow");
		}
		else
		{
			printf("The deleted element is :\n");
			puts(A[top].name);
			printf("%d\n%f",A[top].age,A[top].cgpa);
			top--;
		}
	}
	
	push();
	
	pop();
	
	return 0;
}
