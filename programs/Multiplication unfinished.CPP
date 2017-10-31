#include <stdio.h>
#include <conio.h>
#define MAX 200

void readMatrix(int [][MAX], int [][MAX], int, int, int, int);
int multiplyMatrix(int [][MAX], int [][MAX], int [][MAX], int, int, int, int);
void displayMatrix(int [][MAX], int [][MAX], int [][MAX], int, int, int, int);

void main()
{
  int inputMatrix1[MAX][MAX], inputMatrix2[MAX][MAX], multiplication[MAX][MAX], i, j, r1, r2, c1, c2;
  int result;

  printf("--First Matrix--\n");
  printf("No. of Column =\t");
  scanf("%d", &c1);
  printf("No. of Rows   =\t");
  scanf("%d", &r1);

  printf("\n--Second Matrix--\n");
  printf("No. of Column =\t");
  scanf("%d", &c2);
  printf("No. of Rows   =\t");
  scanf("%d", &r2);

  if(c1 != r2)
    printf("\nSorry-darling, the multiplication is not possible.");
  else
  {
    readMatrix(inputMatrix1, inputMatrix2, r1, r2, c1, c2);
    result = multiplyMatrix(inputMatrix1, inputMatrix2, multiplication, r1, r2, c1, c2);
    displayMatrix(inputMatrix1, inputMatrix2, multiplication, r1, r2, c1, c2);
  }

  getch();
}

void readMatrix(int inputMatrix1[][MAX], int inputMatrix2[][MAX], int r1, int r2, int c1, int c2)
{
  int i, j;

  printf("\nNow, Elements of Matrix 1:\n");
  for(i = 0; i < c1; i++)
  {
    for(j = 0; j < r1; j++)
      scanf("%d", &inputMatrix1[i][j]);
  }

  printf("\nNow, Elements of Matrix 2:\n");
  for(i = 0; i < c2; i++)
  {
    for(j = 0; j < r2; j++)
      scanf("%d", &inputMatrix2[i][j]);
  }

}

int multiplyMatrix(int inputMatrix1[][MAX], int inputMatrix2[][MAX], int multiplication[][MAX], int r1, int r2, int c1, int c2)
{
  int i, j, k;

  for(i = 0; i < c1; i++)
  {
    for(j = 0; j < r2; j++)
    {
      multiplication[i][j] = 0;
      for(k = 0; k < c1; k++)
        multiplication[i][j] = multiplication[i][j] + inputMatrix1[i][k] * inputMatrix2[k][j];
    }
  }
}

void displayMatrix(int inputMatrix1[][MAX], int inputMatrix2[][MAX], int multiplication[][MAX], int r1, int r2, int c1, int c2)
{
  int i, j;

  printf("\nThe First Matrix You Entered Is\n");
  for(i = 0; i < c1; i++)
  {
    for(j = 0; j < r1; j++)
    {
      printf("%3d", inputMatrix1[i][j]);
    }
    printf("\n");
  }


  printf("\nThe Second Matrix You Entered Is\n");
  for(i = 0; i < c2; i++)
  {
    for(j = 0; j < r2; j++)
    {
      printf("%3d", inputMatrix2[i][j]);
    }
    printf("\n");
  }


  printf("\nThe Multiplication of the matrix is:\n");
  for(i = 0; i < c1; i++)
  {
    for(j = 0; j < r2; j++)
      printf("%5d", multiplication[i][j]);
    printf("\n");
  }
}

