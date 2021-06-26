#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() 
{
  long diff, size = 8;
  char *buf1;char *buf2;
  buf1 = (char*)malloc(size);
  buf2 = (char*)malloc(size);
  
  if (buf1 == NULL || buf2 == NULL) 
  {
    perror("malloc");
    exit(-1);
   }
   
   diff =  (unsigned long)buf2 -(unsigned long)buf1;
   memset(buf2, '2', size);
   printf("BEFORE: buf2 = %s\n", buf2);
   memset(buf1, '1', diff+3); 
   printf("AFTER:  buf2 = %s\n", buf2);
   
   return 0;
   
   }
