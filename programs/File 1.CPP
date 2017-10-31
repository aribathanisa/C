//Write a program to read a line of text in lowercase and store in data file
//after converting it to uppercase using character input/output functions.

#include <stdio.h>
#include <conio.h>
#define MAXSTRING 100
void main()
{
  FILE *fp;
  char lineText[MAXSTRING];
  int i = 0;

  printf("---\n");
  printf("Enter a line of text in Lowercase:\t");
  gets(lineText);

  fp = fopen("lineoftext.dat", "w");
  while(lineText[i] != '\0')
  {
    if(lineText[i] >= 'a' && lineText[i] <= 'z')
    {
      lineText[i] = lineText[i] - 32;
    }
    putc(lineText[i], fp);
    i++;
  }
  fclose(fp);

  getch();
}
