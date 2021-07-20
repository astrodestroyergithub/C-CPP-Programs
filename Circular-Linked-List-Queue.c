#include <stdio.h>

struct node{
    int data;
    struct node *next;
}*front=NULL, *rear=NULL, *nw;

void enqueue(int info)
{
    nw = (struct node *)malloc(sizeof(struct node));
    if(nw==NULL)
    {
        printf("OUT OF SPACE!!!");
    }
    else if(front==NULL)
    {
        nw->data=info;
        front=rear=nw;
    }
    else
    {
        nw->data=info;
        rear->next=nw;
        rear=nw;
        rear->next=front;
    }
}

void dequeue()
{
    if(front==NULL)
    {
        printf("QUEUE IS EMPTY!!!\n");
    }
    else if(front==rear)
    {
        nw=(struct node *)malloc(sizeof(struct node));
        nw=front;
        front=NULL;
        rear=NULL;
        printf("THE DELETED NODE IS %d\n",nw->data);
    }
    else
    {
        nw=(struct node *)malloc(sizeof(struct node));
        nw=front;
        front=front->next;
        rear->next=front;
        printf("THE DELETED NODE IS %d\n",nw->data);
    }
}

void print()
{
    if(front==NULL)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else if(front==rear)
    {
        printf("%d\n",front->data);
    }
    else
    {
        struct node *temp;
        temp=front;
        while(temp->next!=front)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d",rear->data);
        printf("\n");
    }
}

int main()
{
    // CREATING A CIRCULAR QUEUE LINKED LIST
    // 10->20->30->40->50->60
    
    for(int i=1; i<7; i++)
        enqueue(i*10);
        
    // PRINTING THE CONTENTS OF THE CIRCULAR QUEUE LINKED LIST (FRONT->REAR)
    
    print();
        
    // PERFORM DELETE OPERATION TWICE
    
    dequeue();
    dequeue();
    
    // PRINTING THE CONTENTS OF THE CIRCULAR QUEUE LINKED LIST (FRONT->REAR)
    
    print();
    
    // PERFORM DELETE OPERATION 5-TIMES
    
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
    // INSERTING 70 INTO THE CIRCULAR QUEUE LINKED LIST
    
    enqueue(70);
    
    // PRINTING THE CONTENTS OF THE CIRCULAR QUEUE LINKED LIST (FRONT->REAR)
    
    print();
    
    // INSERTING 80 INTO THE CIRCULAR QUEUE LINKED LIST
    
    enqueue(80);
    
    // PRINTING THE CONTENTS OF THE CIRCULAR QUEUE LINKED LIST (FRONT->REAR)
    
    print();

    return 0;
}
