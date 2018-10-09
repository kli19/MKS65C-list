struct node {
  int i;
  struct node *next;
};

void print_list(struct node * nod);
struct node * insert_front(struct node * nod, int i);
struct node * free_list(struct node * nod);
