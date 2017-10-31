#include <stdio.h>
#include <conio.h>
#define MAXSTRING 200

void formatString(char [], int);
main()
{
  int i, size = 0;
  char inputString[MAXSTRING], originalString[MAXSTRING];

  printf("---\n");
  printf("Enter String to Format\n\n");
  for(i = 0; (inputString[i] = getchar()) != '\n'; i++)
  {
    originalString[i] = inputString[i];
    size++;
  }

  originalString[i] = '\0';
  inputString[i] = '\0';

  formatString(inputString, size);
  printf("\nThe Formatted String is:\n\n");
  puts(inputString);

  printf("\n\nThe String you had entered is: %s", originalString);

  getch();
}

void  formatString(char inputString[], int count)
{
  int i;

  for( i =  0; i <= count-1; i++)
  {
    if(inputString[i] == ' ')
    {
      inputString[i] = '\n';
      if(inputString[i+1] >= 'a' && inputString[i+1] <= 'z')
        inputString[i+1] = inputString[i+1] + 'A' - 'a';
    }
    else if(inputString[0] >= 'a' && inputString[0] <= 'z')
    {
      inputString[0] = '\n';
      inputString[0] = inputString[0] + 'A' - 'a';
    }
    else
      inputString[i];
  }
}