#include <stdio.h>
#include <conio.h>

void max(int, int, int);  //Function Prototype

void main()
{
  int num1, num2, num3;

  printf("---\n");
  printf("Greatest of Three Numbers\n");
  printf("---\n");
  printf("\nInput Numbers\n");
  scanf("%d%d%d", &num1, &num2, &num3);

  printf("\nThe number you entered are: %3d %3d %3d", num1, num2, num3);
  max(num1, num2, num3);  //Fuction Calling

  getch();
}

//Function Definition
void max(n1, n2, n3)
{
  if(n1 == n2 && n2 == n3)
    printf("\nAll the numbers are same and %d", n1);
  else if(n1 > n2 && n1 > n3)
    printf("\nThe Greatest of them is %d", n1);
  else if(n2 > n1 && n2 > n3)
    printf("\nThe Greatest of them is %d", n2);
  else
    printf("\nThe Greatest of them is %d", n3);
}