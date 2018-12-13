/*
 * Trivial implementation of converter function.
 * You may override this file or create your own.
 */
#include "converter.h"

#include <stdlib.h>
#include <string.h>

void convert_all(unsigned nlines, char *lines[], quote_t nums[])
{


  for (unsigned i = 0; i < nlines; ++i)
  {
    // An inline atoi() function
    //with help from: https://www.geeksforgeeks.org/write-your-own-atoi/
    char * str = lines[i];
    int num = 0;
    // Iterate through all characters of input string and
    // update result
    for (int i = 0; str[i] != '\0'; ++i)
    {
        num = num*10 + str[i] - '0';
    }
    // return result.
    nums[i] = num;
  }
}
