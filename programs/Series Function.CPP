#include <stdio.h>
#include <conio.h>
#include <math.h>

float sumSeries(int, int);

void main()
{
  int xValue, nTerms;
  float result;

  printf("---\n");
  printf("Enter the value of x:\t");
  scanf("%d", &xValue);
  printf("Enter the value of n:\t");
  scanf("%d", &nTerms);

  result = sumSeries(xValue, nTerms);
  printf("The sum of the series is %f", result);

  getch();
}

float sumSeries(int x, int n)
{
  int i, factorial, j, count = 1;
  float sum = 0;

  for(i = 0; count <= n; i++)
  {
    if(i%2 == 0)
    {
      factorial = 1;
      for(j = 1; j <= i; j++)
        factorial = factorial * j;
      sum = sum + (pow(x, i)/factorial);
      count++;
    }  
  }
  return sum;  
}