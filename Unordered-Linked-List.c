#include<stdio.h>

void main() {
  struct list {
    int data;
    struct list * next;
  }* head = NULL, * nw, * tail;

  /******************************************************************************************* Insert in the beginning
  void insert()
  {
  	nw=(struct list*)malloc(sizeof(struct list));
  	if(nw==NULL)
  	{
  		printf("List is full\n");
  	}
  	else if(head==NULL)
  	{
  		int x;
  		printf("Insert a value: ");
  		scanf("%d",&x);
  		nw->data=x;
  		nw->next=NULL;
  		head=tail=nw;
  	}
  	else
  	{
  		int x;
  		printf("Insert a value: ");
  		scanf("%d",&x);
  		nw->data=x;
  		nw->next=head;
  		head=nw;
  	}
  }	************************************************************************************************************/

  /******************************************************************************************* Insert in the middle
  void insert(struct list *p)
  {
  	nw=(struct list*)malloc(sizeof(struct list));
  	if(nw==NULL)
  	{
  		printf("List is full\n");
  	}
  	else if(head==NULL)
  	{
  		int x;
  		printf("Insert a value: ");
  		scanf("%d",&x);
  		nw->data=x;
  		nw->next=NULL;
  		head=tail=nw;
  	}
  	else
  	{
  		int x;
  		printf("Insert a value: ");
  		scanf("%d",&x);
  		nw->data=x;
  		nw->next=p->next;
  		p->next=nw;
  	}
  }	************************************************************************************************************/

  struct list * findPosition(struct list * head, int x) {
    struct list * pos;
    pos = head;
    if (head == NULL) {
      printf("List is empty\n");
    } else {
      while (pos != NULL && pos -> data != x) {
        pos = pos -> next;
      }
      return pos;
    }
  }

  struct list * findPrevious(struct list * head, struct list * pos) {
    struct list * pre = NULL, * i;
    for (i = head; i != NULL; i = i -> next) {
      if (i -> next == pos) {
        pre = i;
        break;
      }
    }
    return pre;
  }

  void deleted() {
    int x;
    printf("Enter element to be deleted: ");
    scanf("%d", & x);
    struct list * pos, * pre;

    pos = findPosition(head, x);
    pre = findPrevious(head, pos);

    if (head == NULL) {
      printf("List is empty\n");
    } else if (pos == NULL) {
      printf("Element not present\n");
    } else {
      printf("Element deleted\n");
      pre -> next = pos -> next;
      free(pos);
    }

  }

  /*
  insert();
  insert();
  insert();
  */

  /*
  insert(p);
  insert(p);
  insert(p);
  */

  deleted();
  deleted();
}
