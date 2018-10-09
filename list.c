# include <stdio.h>
# include <stdlib.h>
# include "list.h"

void print_list(struct node * nod){
  struct node * n = nod;
  while(n){
    printf("%d\n", n->i);
    n = n->next;
  }
}

struct node * insert_front(struct node * nod, int i){
  struct node * newNode;
  newNode = (struct node *) malloc(sizeof(struct node));
  newNode -> next = nod;
  newNode -> i = i;
  return newNode;
  
}

int main(){
  struct node x;
  struct node y;
  struct node * a;
  
  x.i = 0;
  x.next = &y;
  
  y.i = 1;
  y.next = NULL;

  print_list(&x);
  a = insert_front(&x, -2);
  printf("==============\n");
  print_list(a);
  return 0;
}
