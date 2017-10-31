#include <stdio.h>
#include <conio.h>

int main()
{
  int i, j, count = 0, n;

  scanf("%d", &n);

  for(i = 1; count != n; i++)
  {
    for(j = 2; j < i; j++)
    {
      if(i%j == 0)
        break;
    }
    if(i == j)
      count++;
  }

  printf("%d", i-1);

  getch();
  return 0;
}