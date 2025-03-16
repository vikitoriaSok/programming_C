//Ввод и вывод данных, оператор присваивания
//ЗАДАЧА 1
	
#include <stdio.h>
#include <stdlib.h>

/* Дана сторона квадрата a. Найти его периметр P = 4·a */

int main(int argc, char *argv[]) {
	
	int a;
	int p;
	
	printf("Enter a: ");
	scanf("%d", &a);
	
	p = 4 * a;
	printf("Perimeter = %d", p);
	
	return 0;
}



//ЗАДАЧА 2

#include <stdio.h>
#include <stdlib.h>

/*Дана сторона квадрата a. Найти его площадь S = a^2 */

int main(int argc, char *argv[]) {
	
	int a;
	int s;
	
	printf("Enter a: ");
	scanf("%d", &a);
	
	s = a * a;
	printf("S = %d", s);

	return 0;}

//ЗАДАЧА 3

#include <stdio.h>
#include <stdlib.h>

/*Даны стороны прямоугольника a и b
Найти его площадь S = a·b
периметр P = 2·(a + b). */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	int s;
	int p;
	
	printf("Enter a: ");
	scanf("%d", &a);
	
	printf("Enter b: ");
	scanf("%d", &b);
	
	s = a*b;
	printf("Square = %d\n", s);
	
	p = 2 * (a + b);
	printf("Perimeter = %d", p);

	return 0;}

//ЗАДАЧА 4

#include <stdio.h>
#include <stdlib.h>

/* Дан диаметр окружности d. 
Найти ее длину L = П·d. В качестве значения П использовать 3.14. */

int main(int argc, char *argv[]) {
	
	float d;
	float l;
	float p;
	
	printf("Enter diameter: ");
	scanf("%f", &d);
	
	p = 3.14;
	l = p * d;
	printf("Circumference length = %f", l);

	return 0;}



//ЗАДАЧА 5

#include <stdio.h>
#include <stdlib.h>

/* Дана длина ребра куба a. 
Найти объем куба V = a^3
площадь его поверхности S = 6·a^2. */

int main(int argc, char *argv[]) {
	
	int a;
	int v;
	int s;
	
	printf("Enter a: ");
	scanf("%d", &a);
	
	v=a*a*a;
	printf("Volume = %d\n", v);
	
	s=6*a*a;
	printf("Square = %d", &s);
	return 0;}

//ЗАДАЧА 6

#include <stdio.h>
#include <stdlib.h>

/* Даны длины ребер a, b, c прямоугольного параллелепипеда. 
Найти его объем V = a·b·c
площадь поверхности S = 2·(a·b + b·c + a·c). */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	int c;
	int v;
	int s;
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	
	v = a* b * c;
	printf("V = %d\n", v);
	
	s = 2*(a*b + b*c + a*c);
	printf("S = %d", &s);	
	
	return 0;}




//ЗАДАЧА 7
#include <stdio.h>
#include <stdlib.h>

/* Найти длину окружности L и площадь круга S заданного радиуса R:

L = 2·П·R,        S = П·R^2.

В качестве значения П использовать 3.14. */

int main(int argc, char *argv[]) {
	
	float l;
	float s;
	float r;
	float p;
	
	printf("Enter radius: ");
	scanf("%f", &r);
	
	p = 3.14;
	l = 2 * p * r;
	printf ("Circumference length = %f\n", l);
	
	s = p * r * r;
	printf("The area of the circle = %f", s);
	
	return 0;}


//ЗАДАЧА 8
#include <stdio.h>
#include <stdlib.h>

/* Даны два числа a и b. Найти их среднее арифметическое: (a + b)/2. */

int main(int argc, char *argv[]) {
	
	float a;
	float b;
	float c;
	
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
	
	c = (a + b)/2;
	printf("c = %f", c);
	
	return 0;}




//ЗАДАЧА 9
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Даны два неотрицательных числа a и b. 
Найти их среднее геометрическое, т. е. квадратный корень из их произведения: (a·b)^1/2*/

int main(int argc, char *argv[]) {
  
  int a;
  int b;
  int c;
  double d;
  
  printf ("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  if (a<0 || b<0)
  {
  	printf("Error");
  	exit(1);
  }
  
  c = (a*b);
  d = pow(c, 1.2);
  printf("Arithmetic mean = %lf", d);

  return 0;}


