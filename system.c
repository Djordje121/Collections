// implements logic for handeling user input 
#include "system.h"
#include <stdlib.h>
#include <errno.h>

// inherit.doc <see chref="system.h"/>
char *getstr()
{
   char *input = malloc(sizeof(char) * MIN_BYTES);
   int i = 0, len = MIN_BYTES - 1;
   while((*(input + i) = fgetc(stdin))  != '\n')
   {
       if(i == MAX_BYTES) // reached max size of use input
       break;

       if(i == len)
       {
         input = realloc(input, sizeof(char));
         len++;
       }
       i++;
   }
   input = realloc(input, sizeof(char));
   *(input + i) = '\0';
   return input;
}

// inherit.doc <see chref="system.h"/>
int get_int(void)
{
    long int n;
    char *input = getstr();
    char *tmp;
    n = strtol(input, &tmp, BASE_TEN);

    free(input);

    return n;
}

// inherit.doc <see chref="system.h"/>
float get_float()
{
    float n = 0;
    char *input = getstr();
    char *ptr;
    n = strtof(input, &ptr); 
     
    free(input);
    return n;
}

// ingerit.doc <see chref="system.h"/>
long long get_long_long(void)
{
   long long n = 0;
   char *input = getstr();
   char *ptr;
   n = strtoll(input, &ptr, 10);
   free(input);
   if(n == 0)
      printf("conversation error\n");


   return n;
}


