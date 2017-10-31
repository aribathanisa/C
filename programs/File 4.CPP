#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAXSTRING 100
void main()
{
  FILE *fs;
  int ID;
  char Name[MAXSTRING], Address[MAXSTRING];

  fs = fopen("StRecords.dat", "w");
  printf("Enter ID, Name & Address:\t");
  scanf("%d%s%s", &ID, Name, Address);
  fprintf(fs, "%d %s %s", ID, Name, Address);
  fclose(fs);

  fs = fopen("StRecords.dat", "r");
  do
  {
    fscanf(fs, "%d %s %s", &ID, Name, Address);
    printf("%d %s %s", ID, Name, Address);
  }while(!feof(fs));
  fclose(fs);
  getch();
}
