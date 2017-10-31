#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
  FILE *fo, *fc;
  char ch;

  fo = fopen("lineoftext.dat", "r");
  if(fo == NULL)
  {
    puts("Whoops! Where is the source file?");
  }

  fc = fopen("newLineText.dat", "w");
  while(1)
  {
    ch = fgetc(fo);

    if(ch == EOF)
      break;
    else
    {
      if(ch >= 'a' && ch <= 'z')
        ch = ch - 32;

      fputc(ch, fc);
    }
  }
  fclose(fo);
  fclose(fc);
  getch();
}