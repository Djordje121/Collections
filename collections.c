
#include <stdio.h>
#include <stdlib.h>

#include "collections.h"

Sllist *head;

int main(void)
{

  head = Create(20); 

  head = insert(head, 30);
  head = insert(head, 40);
  head = insert(head, 50);
  head = insert(head, 60);

  bool result = findElement(head, 60);
  if(result)
  {
    printf("deleting item..\n");
    deleteNode(&head, 60);
  }
  else printf("no item founded\n");
 

  printf("printing list...\n");
  printList(head);
  


  dispose(head);

  return 0; 
  
}

/* inherit.doc */
void printList(Sllist *head)
{
   Sllist *current = head;
   if(current == NULL)
   {
       free(current);
       return;
   }

   printf("%i\n", current->value);
   printList(current->next);
}

/* inherit.doc */
Sllist *Create(int val)
{
  Sllist *head = malloc(sizeof(Sllist));

  if(head == NULL)
  {
    exit(5555555); // throw exception
  }

  head->value = val;
  head->next = NULL;
  
  return head;
}

/* inherit.doc */
Sllist *insert(Sllist *head, int val)
{
    Sllist *node = malloc(sizeof(Sllist));
    node->value = val;

    node->next = head;
    return node;
}

/* inherit.doc */
bool findElement(Sllist *head, int val)
{
     if(head == NULL)
      exit(55555);   // throw null pointer exception exception

     Sllist *current = head;
     while(current != NULL)
     {
        if(current->value == val)
        {
            current = NULL;
            free(current);
            return true;
        }
        current = current->next; //moving pointer
     }

    current = NULL;
    free(current);

    return false;
}

/* inherit.doc */
void dispose(Sllist *head)
{
    if(head == NULL)
    {
        return;
    }
    
    free(head);
    dispose(head->next);
}

/* inherit.doc */
void deleteNode(Sllist **head, int value)
{
    if(head == NULL)
    {
        exit(5555); //throw exception
    }
     
    if((*head)->value == value)  
    {       
        Sllist *tmp = *head;
        (*head) = (*head)->next; 

         free(tmp);
        return;
    }

    Sllist *previous = *head;    

    while(*(head) != NULL)
    {       
        if((*head)->value == value)
        {          
          Sllist *tmp = *(head);            
          (*head) = previous;            
          (*head)->next = tmp->next;    
        
          free(tmp);           
          break;
        }
        previous = *head;
        *head = (*head)->next; 
    }
   
   previous = NULL;
   free(previous);
}


