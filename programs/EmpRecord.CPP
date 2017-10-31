#include <stdio.h>
#include <conio.h>
#define MAX 200

struct employeeRecord
{
  int ID;
  char name[MAX];
  char post[MAX];
  int salary;
}eR[MAX];

void main()
{
  int n, i;

  printf("MENU\n");
  printf("---\n");
  printf("1. Input Records");
  printf("2. Display data in Ascending Order");
  printf("3. Display names whose Salary is greater than 10, 000.");
  printf("\n\n");
  printf("What operation do you like operate? Enter Number:\t");
  scanf("%d", n);

  switch(n)
  {
    case 1:
    {
      printf("How many records do you wish to enter?:t");
      scanf("%d", &n);
      for(i = 0; i < n; i++)
      {
        printf("Enter ID:\t");
        scanf("%d", &eR[i].ID);

        printf("Enter Name:\t");
        scanf("%s", eR[i].name);

        printf("Enter Post:\t");
        scanf("%s", eR[i].post);

        printf("Enter Salary:\t");
        scanf("%d", &eR[i].salary);

        printf("\n");
      }
      break;
    }

    case 2:
    {

    }
  }

  for(i = 0; i < n; i++)
  {
    printf("Enter Account Number:\t");
    scanf("%d", &cR[i].accno);

    printf("Enter Name:\t");
    scanf("%s", cR[i].name);

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