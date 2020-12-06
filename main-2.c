
#include <stdio.h>

int
main ()
{
  int a;
  printf ("pick up your choice of dish\n");
  printf ("1.pizza\n2.burger\n3.pasta\n4.french fries\n5.sandwhich\n");
  printf ("Enter the number\n");
  scanf ("%d", &a);
  switch (a)
    {
    case 1:
      printf ("you opted for pizza and price=Rs 239\n");
      break;
    case 2:
      printf ("you opted for burger and price=Rs 129\n");
      break;
    case 3:
      printf ("you opted for pasta and price=Rs 179\n");
      break;
    case 4:
      printf ("you opted for french fries and price=Rs 99\n");
      break;
    case 5:
      printf ("you opted for sanchwhich and price=Rs 89\n");
      break;
    }
  return 0;
}
