#include <stdio.h>
#include <conio.h>
#define MAXSTRING 200

int countVowels(char []);

void main()
{
  int i, totalCount;
  char inputString[MAXSTRING];

  printf("---\n");
  printf("Enter String:\t");
  for(i = 0; (inputString[i] = getchar()) != '\n'; i++)
  {}
  inputString[i] = '\0';

  totalCount = countVowels(inputString);
  printf("The numbers of Vowels in the string are %d", totalCount);

  getch();
}

int countVowels(char String[])
{
  int i, count = 0;

  for(i = 0; String[i] != '\0'; i++)
  {
    if(String[i] == 'A' || String[i] == 'a' ||
       String[i] == 'E' || String[i] == 'e' ||
       String[i] == 'I' || String[i] == 'i' ||
       String[i] == 'U' || String[i] == 'u')
      count = count + 1;
  }
  return count;
}