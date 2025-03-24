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





//ЗАДАЧА 10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов.*/

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	int sum;
	int dif;
	int comp;
	int priv;
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	if (a<0 || b<0)
	{
		printf("Error");
		exit(1);
	}
	sum = a + b;
	printf("Summa = %d\n", sum);
	dif = a - b;
	printf("Different = %d\n", dif);
	comp = a * b;
	printf("Composition = %d\n", comp);
	priv = (a*a)/(b*b);
	printf("Private = %d\n", priv);
	

  return 0;}



//ЗАДАЧА 11
#include <stdio.h>
#include <stdlib.h>

/* Даны два ненулевых числа. Найти сумму, разность, произведение и частное их модулей. */

int main(int argc, char *argv[]) {
  
  int a;
  int b;
  int sum;
  int dif;
  int comp;
  float priv; 

  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  
  if (a == 0 || b == 0) // Проверка на ноль
  {
    printf("Error: Non-zero numbers required.\n"); 
    exit(1);
  }

  sum = abs(a) + abs(b); // Использование abs
  printf("Summa = %d\n", sum);
  dif = abs(a) - abs(b); // Использование abs
  printf("Different = %d\n", dif);
  comp = abs(a) * abs(b); // Использование abs
  printf("Composition = %d\n", comp);
  
  priv = (float)abs(a) / abs(b); // abs, float
  printf("Private = %.2f\n", priv); // %f и ограничение знаков

  return 0;
}


//ЗАДАЧА 12
#include <stdio.h>
#include <stdlib.h>

/* Даны катеты прямоугольного треугольника a и b. Найти его гипотенузу c и периметр P */

int main(int argc, char *argv[]) {
  
  int a;
  int b;
  int c;
  int p;
  
  printf("Enter side A: ");
  scanf("%d", &a);
  printf("Enter side B: ");
  scanf("%d", &b);
  c = sqrt(a*a + b*b);
  printf("Hypotenuse = %d\n", c);
  p = a + b + c;
  printf("Perimeter = %d\n", p);

  return 0;}


//ЗАДАЧА 14
#include <stdio.h>
#include <stdlib.h>

/* Дана длина L окружности. 
Найти ее радиус R и площадь S круга, ограниченного этой окружностью, 
учитывая, что L = 2·П·R,    S = П·R^2. 
В качестве значения П использовать 3.14. */

int main(int argc, char *argv[]) {
  
  int l;
  float p;
  int R;
  int S;
  
  printf("Enter the length of the circle: ");
  scanf("%d", &l);
  
  p = 3.14;
  
  R = (l / 2 * p);
  printf("Radius = %d\n", R);
  
  S = (p * R * R);
  printf("Square = %d", S);
  
  return 0;
}

//ЗАДАЧА 25
/*Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x.*/
#include <stdio.h>
#include <stdlib.h>
/* Найти значение функции y = 3x^6 - 6x^2 - 7 при данном значении x. */

int main(int argc, char *argv[]) {
	
	int x;
	int y;
	
	printf("Enter x: ");
	scanf("%d", &x);
	
	y = 3 * pow (x,6) - 6 * pow(x,2) - 7;
	printf("The value of the y function = %d", y);
  
  return 0;}







//ЛОГИЧЕСКИЕ ВЫРАЖЕНИЯ
//ЗАДАЧА 1
#include <stdio.h>
#include <stdlib.h>
/* Дано целое число A. Проверить истинность высказывания: «Число A является положительным». */

int main(int argc, char *argv[]) {
	
	int A;
	
	printf("Enter A: ");
	scanf("%d", &A);
	
	if (A>=0)
	{
		printf("The number is positive!");
	}
	else
	{
		printf("Error");
		exit(1);
	}
    return 0;}


//ЗАДАЧА 2
/* Дано целое число A. Проверить истинность высказывания: «Число A является нечетным».*/
#include <stdio.h>
#include <stdlib.h>
/*  Дано целое число A. Проверить истинность высказывания: «Число A является нечетным». */

int main(int argc, char *argv[]) {
	
	int A;
	
	printf("Enter a: ");
	scanf("%d", &A);
	if (A%2==1)
	{
		printf("%d is odd.\n", A);
	}
	else
	{
		printf("%d is even.\n", A);
	}
  
  return 0;}



//ЗАДАЧА 4
#include <stdio.h>
#include <stdlib.h>
/*  Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B <= 3». */

int main(int argc, char *argv[]) {
	
	int A;
	int B;
	
	printf("Enter A: ");
	scanf("%d", &A);
	printf("Enter B: ");
	scanf("%d", &B);
	if (A>2 && B<=3)
	{
		printf("Inequality is fair!");
	}
	else
	{
		printf("Inequality is unfair");
	}
  return 0;}


//ЗАДАЧА 5
#include <stdio.h>
#include <stdlib.h>
/*  Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A >= 0 или B <-2». */

int main(int argc, char *argv[]) {
	
	int A;
	int B;
	
	printf("Enter A: ");
	scanf("%d", &A);
	printf("Enter B: ");
	scanf("%d", &B);
	if (A>=0 || B<-2)
	{
		printf("Inequality is fair!");
	}
	else
	{
		printf("Inequality is unfair");
	}

  return 0;
}





//УСЛОВНЫЙ ОПЕРАТОР
//ЗАДАЧА 1

#include <stdio.h>
#include <stdlib.h>
/* Дано целое число. 
Если оно является положительным, то вычесть из него 8; 
в противном случае не изменять его. Вывести полученное число. */

int main(int argc, char *argv[]) {
	
	

  return 0;
}





//ЗАДАЧА 2
#include <stdio.h>
#include <stdlib.h>
/*Дано целое число. 
Если оно является положительным, то вычесть из него 8; 
в противном случае прибавить к нему 6. Вывести полученное число. */

int main(int argc, char *argv[]) {
	
	int A;
	
	printf("Enter A: ");
	scanf("%d", &A);
	if (A>=0)
	{
		A=A-8;
	}
	else
	{
		A=A+6;
	}
	
	printf("Number = %d", A);
  return 0;
}





//ЗАДАЧА 3
#include <stdio.h>
#include <stdlib.h>
/*Дано целое число. 
Если оно является положительным, то вычесть из него 8; 
если отрицательным, то прибавить к нему 6; 
если нулевым, то заменить его на 10. Вывести полученное число. */

int main(int argc, char *argv[]) {
  
  int A;
  
  printf("Enter A: ");
  scanf("%d", &A);
  
  if (A>0)
  {
    A=A-8;
  }
  else if (A<0)
  {
    A=A+6;
  }
  else
  {
    A=10;
  }
  printf("NUMBER = %d", A);

  return 0;
}




//ЗАДАЧА 4
#include <stdio.h>
#include <stdlib.h>
/*Даны три числа. Найти сумму двух наибольших из них.*/

int main(){
	
	int num1;
	int num2;
	int num3;
	int sum;
	
	printf("Enter number one: ");
	scanf("%d", &num1);
	printf("Enter number two: ");
	scanf("%d", &num2);
	printf("Enter number three: ");
	scanf("%d", &num3);
	
	// Находим два наибольших числа
  if (num1 <= num2 && num1 <= num3)
   {
    // a - наименьшее, складываем b и c
    sum = num2 + num3;
  } 
  else if (num2 <= num1 && num2 <= num3)
   {
    // b - наименьшее, складываем a и c
    sum = num1 + num3;
  } 
  else 
  {
    // c - наименьшее, складываем a и b
    sum = num1 + num2;
  }

  printf("The sum of the two largest numbers: %d\n", sum);

	
    return 0;
}




ОПЕРАТОР ВЫБОРА
//ЗАДАЧА
#include <stdio.h>
#include <stdlib.h>
/*Дано целое число в диапазоне 1–7. 
Вывести строку — название дня недели, соответствующее данному числу (1 — «понедельник», 2 — «вторник» и т. д.).*/

int main(){
	
	int day;
	
	printf("Enter a number from 1 to 7: ");
	scanf("%d", &day);
	
	switch (day)
	{
		case 1:
			printf("Monday");
			break;
		
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("ERROR");
	}
	
	
    return 0;
}





//ЗАДАЧА
#include <stdio.h>
#include <stdlib.h>
/*Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). 
Вывести название соответствующего времени года («зима», «весна», «лето», «осень»).*/

int main(){
	
	int month;
	printf("Enter the month number from 1 to 12: ");
	scanf("%d", month);
	
	switch (month)
	{
		case 12:
		case 1:
		case 2:
			printf("WINTER");
			break;
		case 3:
		case 4:
		case 5:
			printf("SPRING");
			break;
			
	}
	
    return 0;
}
