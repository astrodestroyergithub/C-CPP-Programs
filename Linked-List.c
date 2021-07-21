#include<stdio.h>

void main() {
  struct list {
    int data;
    struct list * next;
  }* head = NULL, * nw, * tail;

  void insert() {
    nw = (struct list * ) malloc(sizeof(struct list));
    if (nw == NULL) {
      printf("List is full\n");
    } else if (head == NULL) {
      int x;
      printf("Insert a value: ");
      scanf("%d", & x);
      nw -> data = x;
      nw -> next = NULL;
      head = tail = nw;
    } else {
      int x;
      printf("Insert a value: ");
      scanf("%d", & x);
      nw -> data = x;
      nw -> next = NULL;
      tail -> next = nw;
      tail = nw;
    }
  }

  void deleted() {
    if (head == NULL) {
      printf("List is empty\n");
    } else {
      int x;
      printf("Enter value to be deleted: ");
      scanf("%d", & x);
      struct list * i, * p, * j;
      int f = 0;
      for (i = head; i != NULL; i = i -> next) {
        if (i -> data == x) {
          p = i;
          j = p -> next;
          f = 1;
          break;
        }
      }
      if (f == 1) {
        printf("%d is deleted\n", p -> data);
        for (i = head; i != NULL; i = i -> next) {
          if (i -> next == p) {
            i -> next = j;
            break;
          }
        }
        free(p);
        free(j);
        free(i);
      } else {
        printf("%d is absent", x);
        free(p);
        free(j);
        free(i);
      }
    }
  }

  insert();
  insert();
  insert();

  deleted();
  deleted();
}
