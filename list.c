# include <stdio.h>
# include <stdlib.h>
# include "list.h"

void print_list(struct node * nod){
  struct node * n = nod;
  while(n){
    printf("%p: %d\n", n, n->i);
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

struct node * free_list(struct node * nod){
  struct node * start = nod;
  struct node * temp; 
  while(nod -> next){
    temp = nod -> next;
    printf("%p: %d\n", nod, nod->i);
    //nod -> i = 0;
    //nod -> next = NULL;
    free(nod);
    printf("%p: %d\n", nod, nod->i);
    nod = temp;
  }
  return start;
}


int main(){
  struct node x;
  struct node y;
  struct node * a;
  
  x.i = 3;
  x.next = &y;
  
  y.i = 5;
  y.next = NULL;

  print_list(&x);
  a = insert_front(&x, -2);
  printf("==============\n");
  print_list(a);
  printf("==============\n");
  free_list(a);
  print_list(a);
  return 0;
}
