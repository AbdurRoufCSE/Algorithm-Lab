#include <stdio.h>

int main()
{
  int A[100], n, i, j, pos,temp;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &A[i]);

  for (i = 0; i < (n - 1); i++)
  {
    pos= i;

    for ( j= i + 1; j < n; j++)
    {
      if (A[pos] > A[j])
        pos = j;
    }
    if (pos != i)
    {
      temp = A[i];
      A[i] = A[pos];
      A[pos] = temp;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
    printf("%d\n", A[i]);

  return 0;
}
