#include <stdio.h>

int main()
{
   int number;
   print("Hello\n");
   printf("Enter number: ");
   scanf("%d", &number);
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
