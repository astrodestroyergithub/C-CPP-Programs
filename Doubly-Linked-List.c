#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
}*head=NULL, *nw;

void insertAtBeginning()
{
    nw=(struct node *)malloc(sizeof(struct node));
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(nw==NULL)
    {
        printf("OUT OF MEMORY!!!\n");
    }
    else if(head==NULL)
    {
        nw->prev=NULL;
        nw->next=NULL;
        nw->data=x;
        head=nw;
    }
    else
    {
        nw->prev=NULL;
        nw->next=head;
        nw->data=x;
        head->prev=nw;
        head=nw;
    }
}

void insertAtEnd()
{
    nw=(struct node *)malloc(sizeof(struct node));
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(nw==NULL)
    {
        printf("OUT OF MEMORY!!!\n");
    }
    else if(head==NULL)
    {
        nw->prev=NULL;
        nw->next=NULL;
        nw->data=x;
        head=nw;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        nw->prev=temp;
        nw->next=NULL;
        nw->data=x;
        temp->next=nw;
    }
}

void insertAtSpecific()
{
    nw=(struct node *)malloc(sizeof(struct node));
    if(nw==NULL)
    {
        printf("OUT OF MEMORY!!!\n");
    }
    else
    {
        int pos;
        printf("Enter the location: ");
        scanf("%d",&pos);
        struct node *temp=head;
        for(int i=0;i<pos-2;i++)
            temp=temp->next;
        int x;
        printf("Enter data: ");
        scanf("%d",&x);
        nw->data=x;
        nw->next=temp->next;
        nw->prev=temp;
        temp->next->prev=nw;
        temp->next=nw;
    }
}

void deleteFromBeginning()
{
    if(head==NULL)
    {
        printf("LIST EMPTY!!!\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("NODE DELETED!!!\n");
    }
    else
    {
        nw=head;
        head=head->next;
        head->prev=NULL;
        free(nw);
        printf("NODE DELETED\n");
    }
}

void deleteFromEnd()
{
    if(head==NULL)
    {
        printf("LIST EMPTY!!!\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("NODE DELETED!!!\n");
    }
    else
    {
        nw=head;
        while(nw->next!=NULL)
            nw=nw->next;
        nw->prev->next=NULL;
        free(nw);
        printf("NODE DELETED!!!\n");
    }
}

void deleteFromSpecific()
{
    int pos;
    printf("Enter location: ");
    scanf("%d",&pos);
    struct node *temp=head;
    for(int i=0;i<pos-1;i++)
        temp=temp->next;
    nw=temp->prev;
    nw->next=temp->next;
    temp->next->prev=nw;
    free(temp);
    printf("NODE DELETED!!!\n");
}

void search()
{
    int find;
    printf("Enter the element to search: ");
    scanf("%d",&find);
    nw=head;
    int flag,index=0;
    while(nw!=NULL)
    {
        if(nw->data==find)
        {
            printf("Element found at %d\n",index+1);
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
        nw=nw->next;
        index++;
    }
    if(flag==1)
    {
        printf("ELEMENT NOT FOUND!!!\n");
    }
}

void traverse()
{
    printf("The list is: ");
    for(nw=head;nw!=NULL;nw=nw->next)
        printf("%d ",nw->data);
    printf("\n");
}

int main()
{
    while(1)
    {
        printf("\n\nMENU :\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at a Specific Location\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from a Specific Location\n");
        printf("7. Search for an element\n");
        printf("8. Traverse the List\n");
        printf("9. Exit\n");
        
        int c;
        printf("Enter Choice: ");
        scanf("%d",&c);
        
        switch(c)
        {
            case 1:
                insertAtBeginning();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                insertAtSpecific();
                break;
            case 4:
                deleteFromBeginning();
                break;
            case 5:
                deleteFromEnd();
                break;
            case 6:
                deleteFromSpecific();
                break;
            case 7:
                search();
                break;
            case 8:
                traverse();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("INVALID CHOICE!!! ...ABORTING");
                exit(0);
        }
        
    }
    return 0;
}
