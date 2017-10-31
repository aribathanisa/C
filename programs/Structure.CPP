#include <stdio.h>
#include <conio.h>
#define MAX 50

struct joinDate
{
  int day;
  int month;
  int year;
};

struct empRecord
{
  int ID;
  char name[MAX];
  int pay;
  struct joinDate jD;
}eR[MAX];

void main()
{
  int n, i;

  printf("---\n");
  printf("Enter the no. of records you wish to make:\t");
  scanf("%d", &n);

  for(i = 0; i < n; i++)
  {
    printf("Enter ID:\t");
    scanf("%d", &eR[i].ID);

    printf("Enter Name:\t");
    scanf("%s", &eR[i].name);

    printf("Enter Pay:\t");
    scanf("%d", &eR[i].pay);

    printf("Enter Date in format DD MM YYYY:\t");
    scanf("%d%d%d", &eR[i].jD.day, &eR[i].jD.month, &eR[i].jD.year);

    printf("\n");
  }

  printf("---\n");
  printf("Records whose Pay is greater than 10,000\n");
  for(i = 0; i < n; i++)
  {
    if(eR[i].pay > 10000)
    {
      printf("ID:\t%d\n", eR[i].ID);
    	printf("Name:\t%s\n", eR[i].name);
      printf("Pay:\t%d\n", eR[i].pay);
    	printf("Join Date:\t%d/%d/%d", eR[i].jD.day, eR[i].jD.month, eR[i].jD.year);
      printf("\n");
    }
  }

  getch();
}