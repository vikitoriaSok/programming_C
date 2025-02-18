//ЗАДАЧА 1
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	printf("Hello, Vika\n");     
	printf("How old are you?\n");
	return 0;}




//ЗАДАЧА 2
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) 
{	printf("Wake up, Neo...\n\n");
	printf("The Matrix has you...\n\n");
	printf("Follow the white rabbit...\n\n");
	return 0;}





//ЗАДАЧА 2.1
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) 
{	printf("Wake up, Neo...\n\nThe Matrix has you...\n\nFollow the white rabbit...\n");
	return 0;}



//ЗАДАЧА 3
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) 
{	printf("NICKNAME: NEO\n"
	"city: Vladivostok\n"
	"age: 18\n"
	"height: 162\n"
	"weight: 75\n");
 	return 0; }




//ЗАДАЧА 4
БАЗОВЫЕ ТИПЫ ДАННЫХ: 
1. ЦЕЛЫЕ ЧИСЛА - int
2. ВЕЩЕСТВЕННЫЕ ЧИСЛА - double
3. СИМВОЛЫ - char

#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) 
{	char c = "F";
	int n = 10;
	float f = 3.14;
	double d = 3.12445;
	
	printf("char c = %c\n", c);
	printf("int n = %d\n", n);
	printf("float f = %f\n", f);
	printf("double d = %lf\n", d);

	return 0; }




//ЗАДАЧА 5
#include <stdio.h>
#include <stdlib.h>
/* Конвертация температуры
1. Напишите программу на C, которая запрашивает у пользователя температуру в градусах Цельсия
2. преобразует ее в градусы Фаренгейта
3. выводит результат. */

int main(int argc, char *argv[]) 
{	float celsius, fahrenheit;              //ОБЪЯВЛЯЕТ ДВЕ ПЕРЕМЕННЫЕ С ПЛАВАЮЩЕЙ ТОЧКОЙ ДЛЯ ХРАНЕНИЯ ТЕМПЕРАТУРЫ
	
	printf("Enter the temperature in degrees Celsius: ");
	scanf("%f", & celsius);                //СЧИТЫВАЕТ ВВЕДЕНОЕ ЗНАЧЕНИЕ И СОХРАНЯЕТ ЕГО В ПЕРЕМЕННУЮ celsius
	
	fahrenheit = ( celsius *9/5) + 32;
	
	printf("Enter the temperature in degrees Fahrenheit: %.2f\n", fahrenheit);
    
	return 0;}

//ЗАДАЧА 6
#include <stdio.h>
#include <stdlib.h>

/*  Расчет площади и периметра прямоугольника

1. Напишите программу на C, которая запрашивает у пользователя длину и ширину прямоугольника
2. вычисляет его площадь 
3. вычисляет его периметр 
4. выводит результаты. */

int main(int argc, char *argv[]) 
{	int length, width, area, perimeter;
	
	printf("Enter length: ");
	scanf("%d", &length);
	
	printf("Enter width: ");
	scanf("%d", &width);
	
	area = length * width;
	perimeter = 2 * ( length + width);
	
	printf("perimeter area: %d\n", perimeter);
	printf("rectangle area: %d\n", area);
    
	return 0;}



//ЗАДАЧА 7
1. Напишите программу, в которой определяются и инициализируются две переменных типа int. 
2. И их сумма присваивается третьей переменной типа int. 
3. Выведите значение третьей переменной (то есть суммы первых двух переменных) на консоль:
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{ 	int a,b,c;
	printf("vvedite a: \n",a);
	scanf("%d",&a);
	printf("vvedite b: \n", b);
	scanf("%d",&b);
	c=a+b;
	printf( "a + b = %d",c);
	return 0;}




//ЗАДАЧА 8
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{ 	int a = 16;
	int b = 4;
	int c;
	c = a / b;
	printf("%d",c);
    return 0;}




//ЗАДАЧА 9
#include <stdio.h>
#include <stdlib.h>
/* Напишите программу, которая выводит их сумму и среднее арифметическое */

int main(int argc, char *argv[]) 
{ 	int a = 10;
	int b = 5;
	int sum = a + b;
	float d = sum/2;
	
	printf("%d\n",sum);
	printf("%f\n",d);
	return 0;}

//ЗАДАЧА 10
#include <stdio.h>
#include <stdlib.h>
/* 1.Напишите программу, в которой определите три переменных типа int. 
2.При этом третья переменная равна остатку от деления перевой переменной на вторую. */

int main(int argc, char *argv[]) 
{ 	int a = 10;
	int b = 4;
	int c = a % b ;
	printf("a %% b = %d",c);
	return 0;}



//ЗАДАЧА 11
#include <stdio.h>
#include <stdlib.h>
/* 1.Напишите программу, в которой определите три переменных типа float. 
2. Первая переменная равна 10, вторая равна 3. 
3. А третья равна результату деления первой переменной на вторую. 
4.Выведите на консоль значение третьей переменной, при этом при выводе на консоль должно выводиться только три знака после запятой. */

int main(int argc, char *argv[]) 
{ 	float a = 10;
	float b = 3;
	float c = a / b;
	printf(" a/b = %.3f", c);
	return 0;}

//ЗАДАЧА 12
/*Расчет среднего арифметического
Напишите программу на C, которая запрашивает у пользователя три числа и вычисляет их среднее арифметическое.*/
