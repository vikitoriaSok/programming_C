//ЗАДАЧА С ОБЪЯСНЕНИЕМ

#include <stdio.h>  // Для функций ввода/вывода (printf, scanf)
#include <stdlib.h> // Для общих функций (таких как exit)
#include <math.h>    // Для математических функций (pow)

int main() {

  double sum1 = 0, sum2 = 0; // Переменные для хранения сумм диагоналей (double
                             // для большей точности)
  int i, j, n, N, k;          // Переменные для циклов, размеров матрицы и др.

  // --- Часть 1: Работа с матрицей double ---
  printf("Enter the size of the matrix: "); // Запрос размера матрицы у
                                            // пользователя
  scanf("%d", &n);                         // Чтение размера матрицы

  double a[n][n]; // Объявление двумерного массива 'a' размером n x n (double)

  N = pow(n, 2); // Вычисление общего количества элементов в матрице (n^2)

  printf("Enter %d numbers for the array int:\n",
         N); // Запрос элементов матрицы у пользователя
  for (i = 0; i < n; i++)   // Цикл по строкам
    for (j = 0; j < n; j++) // Цикл по столбцам
      scanf("%lf", &a[i][j]); // Чтение элемента матрицы и запись в a[i][j] (%lf
                             // для double)

  // Вычисление сумм диагоналей
  for (i = 0; i < n; i++) {
    sum1 += a[i][i];                // Сумма элементов главной диагонали (i == j)
    sum2 += a[i][(n - 1) - i]; // Сумма элементов побочной диагонали (i + j == n
                                 // - 1)
  }

  printf("The sum of the main diagonal: %.2lf\n",
         sum1); // Вывод суммы главной диагонали (%.2lf - double с двумя знаками
                // после запятой)
  printf("The sum of the side diagonal: %.2lf\n",
         sum2); // Вывод суммы побочной диагонали

  // --- Часть 2: Работа с матрицей int, умножение матрицы на саму себя ---

  printf("Enter the size of the matrix: "); // Повторный запрос размера матрицы
                                            // (для второй матрицы)
  scanf("%d", &n); // Считывание размера (перезаписывает предыдущее значение n)

  int b[n][n],
      c[n][n]; // Объявление двумерных массивов 'b' и 'c' размером n x n (int)

  N = pow(n, 2); // Повторное вычисление общего количества элементов (n^2)

  printf("\nEnter %d chisel:\n", N); // Запрос элементов матрицы 'b'
  for (i = 0; i < n; i++) {          // Цикл по строкам
    for (j = 0; j < n; j++) {        // Цикл по столбцам
      scanf("%d", &b[i][j]);      // Чтение элемента и запись в b[i][j]
    }
  }

  // Умножение матрицы b на саму себя (b * b), результат сохраняется в c
  for (i = 0; i < n; i++) {       // Цикл по строкам результирующей матрицы c
    for (j = 0; j < n; j++) {     // Цикл по столбцам результирующей матрицы c
      c[i][j] = 0;                 // Инициализация элемента c[i][j] нулем
      for (k = 0; k < n; k++) { // Цикл для вычисления элемента c[i][j] как
                                 // суммы произведений элементов строк и столбцов
        c[i][j] += b[i][k] * b[k][j]; //  c[i][j] = Σ (b[i][k] * b[k][j]) для k от
                                      //  0 до n-1
      }
    }
  }

  printf("\n:\n");                  // Вывод разделителя перед результатом
  for (i = 0; i < n; i++) {         // Цикл по строкам результирующей матрицы c
    for (j = 0; j < n; j++) {       // Цикл по столбцам результирующей матрицы c
      printf("%d ", c[i][j]);   // Вывод элемента c[i][j]
    }
    printf("\n");                // Переход на новую строку после вывода строки
                                // матрицы
  }

  return 0; // Успешное завершение программы
}





//ЗАДАЧА 
#include <math.h>

int main() {

  double sum1 = 0, sum2 = 0;
  int i, j, n, N, k;

printf("Enter the size of the matrix: ");   
scanf("%d", &n);
double a[n][n]; 
  N = pow(n, 2); 
  printf("Enter %d numbers for the array int:\n", N); 
  for (i = 0; i < n; i++)                     
    for (j = 0; j < n; j++)                    
      scanf("%lf", &a[i][j]);                 

  for (i = 0; i < n; i++) {               
    sum1 += a[i][i];                           
    sum2 += a[i][(n-1) - i];                          
  }

  printf("The sum of the main diagonal: %.2lf\n", sum1);   
  printf("The sum of the side diagonal: %.2lf\n", sum2);      
  printf("Enter the size of the matrix: ");
  scanf("%d", &n); 

  int b[n][n], c[n][n]; 
  N = pow(n, 2); 

  printf("\nEnter %d chisel:\n", N);
  for (i = 0; i < n; i++) {  
    for (j = 0; j < n; j++) {  
      scanf("%d", &b[i][j]); 
    }
  }

  
  for (i = 0; i < n; i++) { 
    for (j = 0; j < n; j++) { 
      c[i][j] = 0; 
      for (k = 0; k < n; k++) {
        c[i][j] += b[i][k] * b[k][j];
      }
    }
  }

  printf("\n:\n");
  for (i = 0; i < n; i++) { 
    for (j = 0; j < n; j++) { 
      printf("%d ", c[i][j]); 
    }
    printf("\n"); 
  }

  return 0;
}

