#include <stdio.h>
#include <conio.h>

void sqFact(int *, int *, int *);

void main()
{
  int inputNumber, *pNumber, square, factorial;

  pNumber = &inputNumber;
  printf("---\n");
  printf("Enter number to find Square and Factorial:\t");
  scanf("%d", pNumber);

  sqFact(pNumber, &square, &factorial);

  printf("\nResult:\n");
  printf("The Square of %d is %d.\n", *pNumber, square);
  printf("The Factorial of %d is %d.\n", *pNumber, factorial);

  getch();
}

void sqFact(int *Number, int *Sq, int *Fact)
{
  int i;

  *Fact = 1;
  for(i = 1; i <= *Number; i++)
    *Fact = (*Fact) * i;

  *Sq = (*Number) * (*Number);

}