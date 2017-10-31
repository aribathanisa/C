#include <stdio.h>
#include <conio.h>
#define MAX 200

struct customerRecord
{
  int accno;
  char name[MAX];
  int balance;
}cR[MAX];

void main()
{
  int n, i;

  printf("---\n");
  printf("Enter the no. of records you wish to make:\t");
  scanf("%d", &n);

  for(i = 0; i < n; i++)
  {
    printf("Enter Account Number:\t");
    scanf("%d", &cR[i].accno);

    printf("Enter Name:\t");
    scanf("%s", &cR[i].name);

    printf("Enter Balance:\t");
    scanf("%d", &cR[i].balance);

    printf("\n");
  }

  printf("---\n");
  printf("Records whose Balance is less than 1,000\n");
  for(i = 0; i < n; i++)
  {
    if(cR[i].balance < 1000)
    {
      printf("Account No.:\t%d\n", cR[i].accno);
    	printf("Name:\t%s\n", cR[i].name);
      printf("Balance:\t%d\n", cR[i].balance);
      printf("\n");
    }
  }

  getch();
}