/*Implements logic for creating single linked list*/

/* simulation of bool type using enum */
typedef enum {false = 0, true = 1} bool;

/*
Represents single linked list structure using self referential pointer
*/
typedef struct sllist
{
  int value;
  struct sllist * next;


} Sllist;

/** 
 * Creates single linked list 
 * params: intiger value to be stored in list
 * returns:pointer to head node
 */
Sllist *Create(int val);


/**
 * Inserts new node into list and returns pinter to head
 * params: pointer to head node/**
 * Pirnts values of single lincked list
 * params: pointer to the head node 
 */
void printList(Sllist *head);

/** 
 * Inserts new element into list 
 * params: pointer to head node
 * params: intiger value to be stored
 * returns: pointer to head node
 */
Sllist *insert(Sllist *head, int val);

/**
 * Loops trough the list and searches for element with the given value
 * params: pointer to head node
 * params: intiger value to be searched
 * returns: true if element is founded, otherwise false
 */
bool findElement(Sllist *head, int val);


/**
 * Pirnts values of single lincked list
 * params: pointer to the head node 
 */
void printList(Sllist *head);


/**
 * Deletes entiry list and frees memory using recursion
 * params: pointer to head node
 */
void dispose(Sllist *head);


/**
 * Deletes single node from linked list and manages memory
 * params: pointer to a pointer of head node
 * params: intiger value of the element to be deleted
 */
void deleteNode(Sllist **head, int value);







