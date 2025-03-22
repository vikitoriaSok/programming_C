#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <locale.h> ïðèíèìàåò òåêñò íà ðóññêèé

/*
1. Разместить в динамической памяти 2 массива - 2 матрицы размерностью n на n с элементами типа double (с консоли). 
2. Ввести с консоли знак операции: '+', '-' или '*'. 
3. Написать функцию, вычисляющую сум-му, разность или произведение данных матриц (их передать по указателю) возвра-щающую указатель на массив-результат. 
4. Разместить эту функцию в отдельном модуле (отличном от того, где располагается функция main()). 
5.Выдать на консоль значения по-лученного вектора. */

int main() {

  double sum1 = 0, sum2 = 0;
  int i, j, n, N, k;
  char f;

printf("Enter the size of the matrix: ");   
scanf("%d", &n);
double a[n][n]; 
  N = pow(n, 2); 
  printf("Enter %d numbers for the array int:\n", N); 
  for (i = 0; i < n; i++)                     
    for (j = 0; j < n; j++)                    
      scanf("%lf", &a[i][j]);   
	                
printf("Enter the size of the matrix: ");   
scanf("%d", &n);
double b[n][n]; 
  N = pow(n, 2); 
  printf("Enter %d numbers for the array int:\n", N); 
  for (i = 0; i < n; i++)                     
    for (j = 0; j < n; j++)                    
      scanf("%lf", &a[i][j]); 
      
printf("Enter the operation sign: + / - / * \nYour answer: ");
scanf("%s", &f);


	return 0;
}




