#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int number;
   if (argc != 2)
   {
      printf("Invalid input\n");
      return 1;
   }
   number = atoi(argv[1]);
   if (number == 0)
   {
      printf("Zero\n");
   }
   else if (number < 0)
   {
     printf("Negative\n");
   }
   else
   {
     printf("Positive\n");
   }
   return 0;
}
