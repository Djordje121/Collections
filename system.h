// custom library used for handeling user input
// TODO: add exception hadneling

#ifndef _SYSTEM_H
#define _SYSTEM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN_BYTES 5
#define MAX_BYTES 50
#define BASE_TEN 10


/**
 * prompts user for a input line
 * stores input line as string in heap memory
 * <returns> char pointer to memory locaiton of stored input </returns>
 */
char *getstr(void);


/**
 * prompts user for a input line 
 * converts user input to intiger  number and stores value in stack memory\
 * <returns> if convertion is sucssefull returns float value, else returns 0 </returns>
 */
int get_int(void);

/**
 * prompts user for a input line 
 * converts user input to float point number and stores value in stack memory\
 * <returns> if convertion is sucssefull returns float value, else returns 0 </returns>
 */
float get_float(void);

/**
 * prompts user for a input line 
 * converts user input to long long number and stores value in stack memory\
 * <returns> if convertion is sucssefull returns long long value, else returns 0 </returns>
 */
long long get_long_long(void);


#endif
