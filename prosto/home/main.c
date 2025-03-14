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

	return 0;
}
