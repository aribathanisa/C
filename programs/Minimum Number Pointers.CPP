#include <stdio.h>
#include <conio.h>
#define MAXLENGTH 200

int minNum(int, int *);

void main()
{
  int noInputs, arrayNumbers[MAXLENGTH], i, *pArray, minNumber;

  pArray = arrayNumbers;
  printf("---\n");
  printf("Enter the no. of entries you wish to make:\t");
  scanf("%d", &noInputs);

  printf("\nLet's make %d no. of entries now!\n", noInputs);
  for(i = 0; i < noInputs; i++)
    scanf("%d", pArray + i);

  minNumber = arrayNumbers[0];
  minNum(noInputs, pArray);

  printf("\nResult:\n");
  printf("The Minimum Number you entered is %d", minNum(noInputs, pArray));

  getch();
}

int minNum(int n, int *array)
{
  int j, min = *array;

  for(j = 0; j < n; j++)
  {
    if(*(array + j) < min)
      min = *(array + j);
  }

  return min;
}