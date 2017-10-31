/* square.cpp - A program to find the square of a number
 *
 * Written by Ashish Tiwari, 2017.
 *
 */
#include<iostream.h>
#include<conio.h>

inline int square(int n)
{
  return (n*n);
}

int main()
{
  int inputNumber;
  cout << "Enter a number to find the square:\t";
  cin >> inputNumber;
  cout << "The square of " << inputNumber << " is " << square(inputNumber);
  getch();
  return 0;
}
