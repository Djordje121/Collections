
#include <stdio.h>

#include "system.h"
#include "list.h"

Sllist *head = NULL;

int main(void)
{
  
   head = fillList(head);
    
   printf("printing list......\n");
   printList(head);

   dispose(head);
  
  return 0;
}


// <inherit.doc/> 
Sllist *fillList(Sllist *head)
{
    int n = 0;
    printf("weclome to fill mode\n");
    do
    {

     head = addItem(head);
     printf("item successfully added, to continiue press 1, to quit press 0\n");
     n = get_int();

    }
    while(n != 0);

    return head;
}

// <inherit.doc/> 
Sllist *addItem(Sllist *head)
{
   int n = 0;
   printf("enter value: ");
   n = get_int();
   head = insert(head, n);
   return head;
}

