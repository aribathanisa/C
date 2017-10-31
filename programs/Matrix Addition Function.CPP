#include <stdio.h>
#include <conio.h>
#define MAX 50

void readMatrix(int [][MAX], int[][MAX], int, int);
void addMatrix(int [][MAX], int[][MAX], int [][MAX], int, int);
void displayMatrix(int [][MAX], int [][MAX], int [][MAX], int, int);

void main()
{
  int matrix1[MAX][MAX], matrix2[MAX][MAX], additionMatrix[MAX][MAX];
  int row, column, i, j;

  printf("---\n");
  printf("No. of Rows   =\t");
  scanf("%d", &row);
  printf("No. of Column =\t");
  scanf("%d", &column);

  readMatrix(matrix1, matrix2, row, column);
  addMatrix(matrix1, matrix2, additionMatrix, row, column);
  displayMatrix(matrix1, matrix2, additionMatrix, row, column);
  getch();
}

void readMatrix(int matrix1[][MAX], int matrix2[][MAX], int r, int c)
{
  int i, j;

  printf("\nEnter elements of matrix 1\n");
  for(i = 0; i < c; i++)
  {
    for(j = 0; j < r; j++)
    {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("\nEnter elements of matrix 2\n");
  for(i = 0; i < c; i++)
  {
    for(j = 0; j < r; j++)
    {
      scanf("%d", &matrix2[i][j]);
    }
  }

}

void addMatrix(int matrix1[][MAX], int matrix2[][MAX], int additionMatrix[][MAX], int r, int c)
{
  int i, j;

  for(i = 0; i < c; i++)
  {
    for(j = 0; j < r; j++)
    {
      additionMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

}

void displayMatrix(int matrix1[][MAX], int matrix2[][MAX], int additionMatrix[][MAX], int r, int c)
{
  int i, j;

  printf("\nThe First Matrix is:\n");
  for(i = 0; i < c; i++)
  {
    for(j = 0; j < r; j++)
    {
      printf("%d\t", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("\nThe Second Matrix is:\n");
  for(i = 0; i < c; i++)
  {
    for(j = 0; j < r; j++)
    {
      printf("%d\t", matrix2[i][j]);
    }
    printf("\n");
  }

  printf("\nThe Result of Addition is:\n");
  for(i = 0; i < c; i++)
  {
    for(j = 0; j < r; j++)
    {
      printf("%d\t", additionMatrix[i][j]);
    }
    printf("\n");
  }
}



