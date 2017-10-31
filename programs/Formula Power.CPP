#include <stdio.h>
#include <conio.h>

float power(float, int);  //Function Prototype

void main()
{
  int upper;
  float base, result;

  printf("---\n");
  printf("Base Number: \t");
  scanf("%f", &base);

  printf("Power to which to be raised\t");
  scanf("%d", &upper);

  result = power(base, upper);  //Function Call
  printf("\nThe result of %f to the power %d is %f", base, upper, result);

  getch();
}

//Function Definition
float power(float baseNumber, int upperNumber)
{
  int i;
  float powerResult = 1;

  for(i = 1; i <= upperNumber; i++)
    powerResult = powerResult * baseNumber;
  return powerResult;
}
