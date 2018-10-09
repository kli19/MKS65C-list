# include <stdio.h>
# include "list.h"

void print_list(struct node * nod){
  struct node * n = nod;
  while(n){
    printf("%d", n->i);
    n = n->next;
  }
}

int main(){
  struct node x;
  struct node y;
  
  x.i = 0;
  x.next = &y;
  
  y.i = 1;
  y.next = NULL;
  return 0;
}
