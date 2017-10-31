#include <stdio.h>
#include <conio.h>
#define AREA(length, breadth) (length * breadth)
#define PERIMETER(length, breadth) (2*(length + breadth))


void main()
{
  int len, bdh, area, perimeter;

  printf("---\n");
  printf("Area & Perimeter of a Rectangle Using Macro\n");
  printf("\nInput Length:\t");
  scanf("%d", &len);
  printf("Input Breadth:\t");
  scanf("%d", &bdh);

  area = AREA(len, bdh);
  perimeter = PERIMETER(len, bdh);

  printf("\nThe Area of the Rectangle is %d sq. units.", area);
  printf("\nThe Perimeter of the Rectangle is %d.", perimeter);

  getch();
}
