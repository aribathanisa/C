/* squarewinline.cpp -- Program using inline function to calculate the square
 * of a number.
 *
 * Written by Ashish Tiwari <hi@aashishtiwari.com.np>
 *
 */

#include <iostream>
#include <conio.h>

inline unsigned squareofNumber(int Num)
{
  return (Num * Num);
}

int main()
{
  int inputNumber;

  cout << "Enter Number:\t";
  cin >> inputNumber;

  cout << "The Square of a number is " << squareofNumber(inputNumber) << endl;

  getch();
  return 0;
}


