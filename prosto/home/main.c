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
