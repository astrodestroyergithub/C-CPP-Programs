# include<stdio.h>

void main()
{
	int size=5, lc=-1;
	int A[size];
	
	void insert()
	{
		if(lc>=size)
		{
			printf("List is full\n");
		}
		else
		{
			int x;
			printf("Enter the value: ");
			scanf("%d",&x);
			lc++;
			A[lc]=x;
		}
	}
	
	void deleted()
	{
		int p,i,n,f=0;
		
		if(lc==-1)
		{
			printf("List is empty\n");
		}
		else
		{
			printf("Enter value to be deleted: ");
			scanf("%d",&n);
			for(i=0;i<=lc;i++)
			{
				if(A[i]==n)
				{
					f=1;
					p=i;
					break;
				}
			}
			if(f==1)
			{
				printf("%d is deleted\n",A[p]);
				for(i=p+1;i<size;i++)
				{
					A[i-1]=A[i];
				}
				lc--;
			}
			else
			{
				printf("%d is absent\n",n);
			}
		}
	}
	
	
	insert();
	insert();
	insert();
	insert();
	
	deleted();
	deleted();
	deleted();
	deleted();
	deleted();
	deleted();
}
