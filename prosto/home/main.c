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
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{	float a, b, c, d;

	printf("vvedite a: \n");
	scanf("%f", &a);
	
	printf("vvedite b: \n");
	scanf("%f", &b);
	
	printf("vvedite c: \n");
	scanf("%f", &c);
	
	d = (a + b + c)/3;
	
	printf(" d = %f\n", d);
	
	return 0;}



// ЗАДАЧА 13
/*Вычисление площади треугольника (формула Герона)
1. Напишите программу C, которая запрашивает у пользователя длины трех сторон треугольника
2. вычисляет его площадь, используя формулу Герона:
площадь = sqrt(p  (p - a)  (p - b) * (p - c))
где:
•  a, b, c - длины сторон треугольника
•  p - полупериметр треугольника (p = (a + b + c) / 2) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	
	float a,b,c,p,s;
	
	printf("vvedite a: \n");
	scanf("%f", &a);
	
	printf("vvedite b: \n");
	scanf("%f", &b);
	
	printf("vvedite c: \n");
	scanf("%f", &c);
	
	p = ( a + b + c) / 2;
	printf("p = %f\n", p);
	
	s = sqrt ( p * ( p - a) * ( p - b) * ( p - c) );
	printf("s = %f\n", s);
	
	
	return 0;
}

//ЗАДАЧА 14 
#include <stdio.h>
#include <stdlib.h>
/* Напишите программу обмена значений двух переменных типа int. Для обмена значениями используйте 4 способа:
Обмен через третью переменную */

int main(int argc, char *argv[])
{	int a = 10;
	int b = 4;
	int c = a;
	a = b;
	b = c;
	
	printf ("a = %d\n", a);
	printf ("b = %d\n", b);
	printf ("c = %d\n", c);
	return 0;}



//УСЛОВНЫЕ КОНСТРУКЦИИ
//ЗАДАЧА 15
#include <stdio.h>
#include <stdlib.h>

/* 1.Напишите программу, которая проверят, равны ли две переменных. 
2.Если они равно, то выводит "equal"
3.если не равны, то выводит "not equal": */

int main(int argc, char *argv[]) {
	int a;
	int b;
	
	printf("vvedite a:\n", a);
	scanf("%d", &a);
	
	printf("vvedite b:\n", b);
	scanf("%d", &b);
	
	if ( a == b)
	 {
	 	printf("equal");
	 }
	else
	{
		printf(" not equal ");
	}
	
	return 0;}

//ЗАДАЧА 16
#include <stdio.h>
#include <stdlib.h>

/* 1. Напишите программу, которая определяет переменную типа int и проверяет ее значение. 
2. если значение переменной больше 4 и одновременно меньше 14, то на консоль выводится "within range (4..14)". 
3. В остальных случаях пусть на консоль выводится "out of range". */
int main(int argc, char *argv[]) {
	int a;
	
	printf("vvedite a:\n", a);
	scanf("%d", &a);
	
	if ( a>4 && a<14)
	{
		printf("within range (4..14)");
	}
	else
	{
		printf("out of range");
	}
	
	return 0;}


//ЗАДАЧА 17
#include <stdio.h>
#include <stdlib.h>

/* 1.Напишите программу, которая определяет переменную типа int и проверяет ее значение. 
2. если значение переменной больше или равно 4 и одновременно меньше или равно 14, то на консоль выводится "within range [4..14]".
3. В остальных случаях пусть на консоль выводится "out of range". */
int main(int argc, char *argv[]) 
{	int a;
	
	printf("vvedite a:\n", a);
	scanf("%d", &a);
	
	if ( a >= 4 && a <= 14)
	{
		printf("within range [4..14]");
	}
	else
	{
		printf("out of range");
	}
	
	return 0;}


//ЗАДАЧА 18
#include <stdio.h>
#include <stdlib.h>
/* 1. Напишите программу, которая определяет переменную типа int со значением 5. 
2. Используйте конструкцию switch..case для проверки, что значение переменной равно одному из значений из набора [4, 5, 6]. */
int main(int argc, char *argv[]) {
	
	int num = 5;
	switch(num)
	
	{
		case 4:
			printf("num = 4");
			break;
		case 5:
			printf("num = 5");
			break;
		case 6:
			printf("num = 6");
	}
	
	
	return 0;
}

//ЗАДАЧА 19
/*1.Напишите программу, которая определяет три переменных типа int
2. выводит на консоль переменную с наибольшим значением*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{	int a = 10 ;
	int b = 15 ;
	int c = 12 ;
	int max = c;
	if ( a>b && a>c)
		max = a;
	else if ( b> a && b>c )
		max = b;
	printf("max: %d", max);
	return 0;}




Циклы
//ЗАДАЧА 20
/* Напишите программу, которая c помощью циклов for и while выводит на консоль пять раз строку "Hello Work".*/
#include <stdio.h>
int main(int argc, char** argv) {
	 for (int i = 0; i < 6; i++)
    {
        printf("%d", i);
    }
    return 0;
}




//ЗАДАЧА 21
/*выведем квадраты чисел от 0 до 8:*/
#include <iostream>
#include <stdio.h>

int main(int argc, char** argv) {
	for (int i=0; i<9; i++)
	{	
		printf("%d * %d = %d\n", i,i,i*i);
	}
    return 0;
}



//ЗАДАЧА 22
int main(void)
{
    for(int i=0; i < 5; i++)
    {
        printf("Hello Work\n");
    }
 
    int count = 0;
    while(count < 5)
    {
        printf("Hello Work\n");
        count++;
    }
     
    return 0;
}

//ЗАДАЧА 22
#include <iostream>
#include <stdio.h>


int main(void)
{
	int x=2;
	switch (x)
	{
		case 1:
			printf("x=1\n");
			break;
		case 2:
			printf("x=2\n");
			break;
		case 3: 
            printf("x = 3 \n");
            break;
	}

     
    return 0;	




//ЗАЛАЧА 23
#include <iostream>
#include <stdio.h>
/* Вывод чисел от 1 до 5*/

int main(void)
{	
	int i = 1;
	do
	{
		printf("%d", i);
		i++;	
	}
	while (i<=5);
	
    return 0;
}



//ЗАДАЧА 24
#include <iostream>
#include <stdio.h>
int main() {

	int i=6;
	while (i>0)
	{
		printf("%d\n", i);
		i--;
	}
	
  return 0;
}


//ПОВТОР
#include <stdio.h>


int main() {

	int a;
	int b;
	int c;
	
	printf("enter a: ");
	scanf("%d", &a);
	
	printf("enter b: ");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("a + b = %d", c);
	
  return 0;
}


/////////////////////
#include <stdio.h>


int main() {

	int a=20;
	int b=4;
	int sum=a+b;
	int sr=((a+b)/2);
	printf("summa = %d\n", sum);
	printf("crednee = %d", sr);

	
  return 0;}




#include <stdio.h>

int main(void) {
    int a;
    int b;
    
    printf("enter a: \n");
    scanf("%d", &a);
    printf("enter b: \n");
    scanf("%d", &b);
    
    if (a==b)
    {
    	printf("equal\n");
	}
	else
	{
		printf("not equal");
	}
    return 0;}




#include <stdio.h>

int main(void) {
	
	int a;
	printf("enter a:\n");
	scanf("%d", &a);
	if (a>4 && a<14)
	{
		printf("within range (4...14)");
	}
	else
	{
		printf("out of range");
	}
	
    return 0;}


#include <stdio.h>

int main(void) {
	
	int a;
	printf("enter a:\n");
	scanf("%d", &a);
	switch (a)
	{
		case 4:
			printf("a=4");
			break;
		case 5:
			printf("a=5");
			break;
		case 6:
			printf("a=6");
			break;}
    return 0;}




//КОД НЕ РАБОТАЕТ ПОЧЕМУ
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i); // Добавлен пробел для удобства
    }
    printf("\n"); // Перенос строки в конце
    return 0;
}
