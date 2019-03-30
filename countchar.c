#include <stdio.h>

int main()
{

   double nc;

   for (nc = 0; getchar() < 140; ++nc)
      ;
   printf("%.0f\n", nc);
}
