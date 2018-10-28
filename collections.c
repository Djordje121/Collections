
#include <stdio.h>
#include <stdlib.h>

#include "collections.h"


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

     while(head != NULL)
     {
        if(head->value == val)
        {
            return true;
        }
        head = head->next; //moving pointer
     }

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


