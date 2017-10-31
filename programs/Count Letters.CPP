#include <stdio.h>
#include <conio.h>
#define MAXSTRING 200

void countCharacters(char []);

void main()
{
  int i;
  char inputString[MAXSTRING];

  printf("---\n");
  printf("Enter a String:\t");
  for(i = 0; (inputString[i] = getchar()) != '\n'; i++)
  {}
  inputString[i] = '\0';
  printf("\nThe string you entered is:\t");
  puts(inputString);
  countCharacters(inputString);
  getch();
}

void countCharacters(char String[])
{
  int i, lowerCount = 0, upperCount = 0, otherCount = 0;

  for(i = 0; String[i] != '\0'; i++)
  {
    if(String[i] >= 'A' && String[i] <= 'Z')
      upperCount = upperCount + 1;
    else if(String[i] >= 'a' && String[i] <= 'z')
      lowerCount = lowerCount + 1;
    else
      otherCount = otherCount + 1;
  }

  printf("\nThe result:\n");
  printf("\nTotal Lowercase Letters = %d", upperCount);
  printf("\nTotal Uppercase Letters = %d", lowerCount);
  printf("\nOther Characters        = %d", otherCount);
}