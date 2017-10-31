#include <stdio.h>
#include <conio.h>

void main()
{
  int testVariable = 1337, *pTestVariable;

  pTestVariable = &testVariable;

  printf("---\n");
  printf("The Direct Address of the testVariable is %d\n", &testVariable);
  printf("The Indirect Address of the testVariable is %d\n", pTestVariable);
  printf("The Content stored by testVariable is %d\n", *pTestVariable);

  getch();
}
