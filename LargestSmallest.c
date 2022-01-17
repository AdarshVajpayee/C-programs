//program to Find the largest and smallest element in the array
#include <stdio.h>
void main ()
{
  int n, i, a[10], largest, smallest;
  printf ("Enter the value how many u want to read : ");
  scanf ("%d", &n);
  for (i = 0; i <= 1; i++)
    {
      printf ("Enter the value of a[%d] : ", i);
      scanf ("%d", &a[i]);
    }
  (a[0] > a[1]) ? (largest = a[0], smallest = a[1]) :
    (largest = a[1], smallest = a[0]);

  for (i = 2; i < n; i++)
    {
      printf ("Enter the value of a[%d] : ", i);
      scanf ("%d", &a[i]);
      if (largest < a[i])
	{
	  largest = a[i];
	}
      else if (smallest > a[i])
	{
	  smallest = a[i];
	}

    }
  printf ("The largest element of the array = %d\n", largest);
  printf ("The smallest element of the array = %d\n", smallest);
}
