#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAXSTRING 200
int main()
{
  char inputString[MAXSTRING];
  char shutDown[MAXSTRING];

  gets(inputString);
  strcpy(shutDown, "PC please go to Sleep");

  if(strcmp(inputString, shutDown) == 0)
    printf("Okay, mam. Good Night");
  else
    printf("Invalid input darling!");

  getch();
  return 0;
}
