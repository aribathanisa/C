#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAXSTRING 100
void main()
{
  FILE *fs;
  char ch[MAXSTRING];

  fs = fopen("newtextfile.dat", "w");
  printf("Enter any String:\t");
  while(strlen(gets(ch)) > 0)
  {
      fputs(ch, fs);
  }
  fclose(fs);

  fs = fopen("newtextfile.dat", "r");
  while(fgets(ch, 100, fs) != NULL)
    printf("%s", ch);
  fclose(fs);
  getch();
}