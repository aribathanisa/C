#include <stdio.h>
#include <conio.h>

void swapValue(int *, int *);

void main()
{
  int inputNumber1, inputNumber2, *p1, *p2;

  p1 = &inputNumber1;
  p2 = &inputNumber2;

  printf("---\n");
  printf("Enter the 1st Number:\t");
  scanf("%d", p1);
  printf("Enter the 2nd Number:\t");
  scanf("%d", p2);

  printf("\nThe values before swapping:\n");
  printf("Number 1 : %d \nNumber 2 : %d\n", *p1, *p2);
  swapValue(p1, p2);
  printf("\nThe values after swapping:\n");
  printf("Number 1 : %d \nNumber 2 : %d\n", *p1, *p2);

  getch();
}

void swapValue(int *num1, int *num2)
{
  int hold;

  hold = *num1;
  *num1 = *num2;
  *num2 = hold;
}
