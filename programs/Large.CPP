#include <stdio.h>
#include <conio.h>
#define MAX 200

struct employeeRecord
{
  int ID;
  char name[MAX];
  char post[MAX];
  int salary;
};
typedef struct employeeRecord RULE;
RULE eR[MAX], temp[MAX];

void main()
{
  int n, r, i, j;

  do
  {
    printf("MENU\n");
    printf("---\n");
    printf("1. Input Records\n");
    printf("2. Display data in Ascending Order\n");
    printf("3. Display names whose Salary is greater than 10, 000.\n");
    printf("4. Exit\n");
    printf("\n\n");
    printf("What operation do you like operate? Enter Number:\t");
    scanf("%d", &n);

    switch(n)
    {
      case 1:
      {
        printf("How many records do you wish to enter?:\t");
        scanf("%d", &r);
        for(i = 0; i < r; i++)
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
          temp[i] = eR[i];
        }
        break;
      }

      case 2:
      {
        for(i = 0; i < r-1; i++)
        {
          for(j = 0; j < r - 1 - i; j++)
          {
            if (eR[j+1].ID < eR[j].ID)
            {
              temp[j] = eR[j];
              eR[j] = eR[j+1];
              eR[j+1] = temp[j];
            }
          }
        }

        printf("\nThe Records in Ascending Order is\n");
        for(i = 0; i < r; i++)
        {
          printf("ID:\t%d\n", eR[i].ID);
    	    printf("Name:\t%s\n", eR[i].name);
          printf("Post:\t%s\n", eR[i].post);
          printf("Salary:\t%d\n", eR[i].salary);
          printf("\n");
        }
        break;
      }

      case 3:
      {
        printf("\nEmployee with Salary Greater than 10,000\n");
        for(i = 0; i < r; i++)
        {
          if(eR[i].salary > 10000)
          {
            printf("ID:\t%d\n", eR[i].ID);
            printf("Name:\t%s\n", eR[i].name);
            printf("Post:\t%s\n", eR[i].post);
            printf("Salary:\t%d\n", eR[i].salary);
            printf("\n");
          }
        }
        break;
      }

      case 4:
      {
        printf("Good bye, have a wonderful time ahead!");
        break;
      }

      default:
        printf("Invalid input, darling!\nTry Again\n");

    }
  }while(n != 4);

  getch();
}
