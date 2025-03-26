/*
1. Разместить в динамической памяти 2 массива - 2 матрицы размерностью n на n с элементами типа double (с консоли). 
2. Ввести с консоли знак операции: '+', '-' или '*'. 
3. Написать функцию, вычисляющую сум-му, разность или произведение данных матриц (их передать по указателю) возвра-щающую указатель на массив-результат. 
4. Разместить эту функцию в отдельном модуле (отличном от того, где располагается функция main()). 
5.Выдать на консоль значения по-лученного вектора. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;          // Размер матрицы (n x n)
  double **mat1;  // Указатель на первую матрицу
  double **mat2;  // Указатель на вторую матрицу
  char f;
  
  
  
  printf("Enter the size of the matrix: ");
  scanf("%d", &N);
  
  
  
  //Выделяем память для mat1 (с проверкой ошибок)
  mat1 = (double **)malloc(N * sizeof(double *)); // Память под строки
  
  if (!mat1) 
  {  // !mat1 равно mat1 == NULL
    perror("MEMORE ERROR mat1");
    return 1; 
  }
  
  for (int i = 0; i < N; i++) 
  {
    mat1[i] = (double *)malloc(N * sizeof(double)); // Память под элементы в строке
    if (!mat1[i]) 
	{
      perror("MEMORE ERROR mat1[i]");
      // Освобождаем ранее выделенную память 
      for (int j = 0; j < i; j++) 
	  {
        free(mat1[j]);
      }
      free(mat1);
      return 1;
    }
  }
  
  
  
  
  mat2 = (double **)malloc(N * sizeof(double *));
  
  if (!mat2) 
  {
    perror("MEMORE ERROR mat2");
    // Освобождаем память, выделенную для mat1, если что-то пошло не так.
    for (int i = 0; i < N; i++) 
	{
      free(mat1[i]);
    }
    free(mat1);
    return 1;
  }
  
  for (int i = 0; i < N; i++)
   {
    mat2[i] = (double *)malloc(N * sizeof(double));
    if (!mat2[i]) 
	{
      perror("MEMORE ERROR mat2[i]");
      // Освобождаем ранее выделенную память.
      for (int j = 0; j < i; j++) 
	  {
        free(mat2[j]);
      }
      free(mat2);
      for (int j = 0; j < N; j++)
	   {
          free(mat1[j]);
      }
      free(mat1);
      return 1;
    }
  }





printf("Enter the elements of the matrix one:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("mat1[%d][%d]: ", i, j);
      scanf("%lf", &mat1[i][j]); //Вводим значения с клавиатуры
    }
  }
  
  
printf("Enter the size of the matrix: ");
scanf("%d", &N);  
printf("Enter the elements of the matrix two:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("mat2[%d][%d]: ", i, j);
      scanf("%lf", &mat1[i][j]); //Вводим значения с клавиатуры
    }
  }



printf("Enter the operation sign: + / - / * \nYour answer: ");
scanf("%s", &f);
printf("\n");





  //Освобождаем память 
  for (int i = 0; i < N; i++) {
    free(mat1[i]);  // Освобождаем строки
    free(mat2[i]);  // Освобождаем строки
  }
  free(mat1);  // Освобождаем массив указателей на строки
  free(mat2);  // Освобождаем массив указателей на строки

  return 0;
}








