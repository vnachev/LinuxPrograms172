#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int num;
   if (argc != 2)
   {
      printf("Invalid input\n");
      return 1;
   }
   num = atoi(argv[1]);
   if (num == 0)
   {
      printf("Zero\n");
   }
   else if (num < 0)
   {
     printf("Negative\n");
   }
   else
   {
     printf("Positive\n");
   }
   return 0;
}
