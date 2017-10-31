#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  char time[8];
  int i, j, hour, minute, second, temp;

  gets(time);
  puts(time);
  strupr(time);

  hour = (int)(time[i] - 48);
  hour = hour * 10;
  hour = hour + (int)(time[i+1] - 48);

  if(time[6] == 'P' && time[7] == 'M')
  {
    hour = hour + 12;
    printf("%d", hour);
  }

  temp = hour/10;
  temp = hour + 48;
  time[0] = (char)(temp);
  time[1] = (char)(hour);
  puts(time);

  getch();

  return 0;
}