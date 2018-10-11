# include <stdio.h>
# include <stdlib.h>
# include "list.h"

int main(){
  struct node * a = insert_front(NULL,3);
  struct node * b = insert_front(a,6);
  struct node * c = insert_front(b,9);
  struct node * d = insert_front(c,12);
  print_list(d);


  return 0;
}
