#include <stdio.h>
#include <conio.h>

int factorial(int);

void main()
{
  int inputNumber;

  printf("---\n");
  printf("Enter a number to find factorial:\t");
  scanf("%d", &inputNumber);

  printf("\nThe factorial of %d is %d", inputNumber, factorial(inputNumber));

  getch();
}

int factorial(int n)
{
  if(n <= 1)
    return 1;
  else
    return (n * factorial(n - 1));
}
