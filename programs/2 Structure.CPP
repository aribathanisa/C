#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 50

struct dateOB
{
  int day;
  int month;
  int year;
};

struct studentRecord
{
  int rollNo;
  int name[MAX];
  char faculty[MAX];
  struct dateOB dob;
}sR[100];

void main()
{
  int i, n, j;

  printf("---\n");
  printf("Enter the no. of records you wish to make:\t");
  scanf("%d", &n);

  for(i = 0; i < n; i++)
  {
    printf("Enter Roll No:\t");
    scanf("%d", &sR[i].rollNo);

    printf("Enter Name:\t");
    scanf("%s", &sR[i].name);

    printf("Enter Faculty:\t");
    scanf("%s", &sR[i].faculty);

    printf("Enter Date of Birth in DD MM YYYY:\t");
    scanf("%d%d%d", &sR[i].dob.day, &sR[i].dob.month, &sR[i].dob.year);

    printf("\n");
  }

  printf("---\n");
  printf("Students whose Faculty is BBA\n");
  for(i = 0; i < n; i++)
  {
    j = strcmp(sR[i].faculty, "BBA");
    if(j == 0)
    {
      printf("ID:\t%d\n", sR[i].rollNo);
    	printf("Name:\t%s\n", sR[i].name);
      printf("Faculty:\t%d\n", sR[i].faculty);
    	printf("Date of Birth:\t%d/%d/%d", sR[i].dob.day, sR[i].dob.month, sR[i].dob.year);
      printf("\n");
    }
  }

  getch();
}