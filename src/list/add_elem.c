#include "mylist.h"

/* 
 Creates a new node with elem and adds it to head. DO NOT add a NULL 
 elem.
 DOES NOT PARSE
*/
void add_elem(void* elem, struct s_node** head)
{
  struct s_node* node;

  assert(head != NULL && elem != NULL);

  node = new_node(elem, NULL, NULL);
  add_node(node, head);
}
