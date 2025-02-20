#include <stdio.h>   //ПОДКЛЮЧАЕТ БИБЛИОТЕКУ ВВОДА/ВЫВОДА
#include <stdlib.h>  //ПОДКЛЮЧАЕТ БИБЛИОТЕКУ ОБЩЕГО НАЗНАЧЕНИЯ
#include <math.h>  //ПОДКЛЮЧАЕТ МАТЕМАТИЧЕСКУЮ БИБЛИОТЕКУ

/* 1.Объявить вещественные переменные a, b и с и задать их значения. 
	2.Предполагая, что a, b, c есть коэффициенты квадратного уравнения вывести на консоль значения их корней х1, х2. 
	3.Следует подобрать такие значения коэффициентов, при которых корни будут существовать.
	Примечание. Для выполнения задания потребуется функции вычисления квад-ратного корня (возведение в степень), а так же вывод данных на консоль.
	Возведение в степень - подключаем заголовочный файл	 math.h и используем функцию pow, первым параметром которого должен быть возводимое значение, а вторым - степень, тип данных double.
	Вывод данных - заголовочный файл stdio.h, функция printf, первым параметром является форматная строка, а последующие - переменные, значения которых необхо-димо вывести.
run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,b,c;                    //DOUBLE - ЧИСЛО С ПЛАВАЮЩЕЙ ТОЧКОЙ
	double x1,x2,d;
	
	a=1.2;
	b=0.5;
	c=3.3;

	printf("vvedite a: \n");
	scanf("%lf", &a);             //%lf — это вещественный формат двойной точности / числа с плавающей точкой типа double
	printf("vvedite b: \n");      //SCANF - ВВОД ДАННЫХ
	scanf("%lf", &b);
	printf("vvedite c: \n");     
	scanf("%lf", &c);
	
	d=pow(b,2)-4*a*c;             //POW(ОСНОВАНИЕ, СТЕПЕНЬ) - ВОЗВРАЩАЕТ СТЕПЕНЬ ЧИСЛА
	printf("d=%lf\n",d);
	
	if (d>0){
		x1=-b+sqrt(d)/(2*a);
		x2=-b-sqrt(d)/(2*a);
		printf("x1=%lf \ n",x1);
		printf("x2=%lf \ n",x2);
	
}
	if (d==0){
		x1=-b+sqrt(d)/(2*a);
		printf("x=%lf \ n",x1);
	}
	if (d<0){
	printf("net kornei n");	
	}
	
		
	
	
	return 0;
}

//   %d — целые числа; 
//   %f — вещественное число типа float; 
//   %lf — вещественное число типа double (обозначение lf от long float); 
//   %c — символ 



//АНАЛОГИЧНАЯ ЗАДАЧА С ЧАТА, НО С БОЛЕЕ ЧЕТКИМИ ТРЕБОВАНИЯМИ.
/* Напишите программу на языке C, которая решает квадратное уравнение вида ax² + bx + c = 0.
Требования:

1.  Объявите три вещественные переменные типа double: a, b, и c.  Эти переменные будут представлять коэффициенты квадратного уравнения.

2.  Задайте значения переменным a, b, и c таким образом, чтобы дискриминант уравнения (D = b² - 4ac) был неотрицательным (D >= 0).  

3.  Вычислите дискриминант D = b² - 4ac.

4.  Вычисление корней:
    *   Если D > 0, вычислите два различных вещественных корня x1 и x2 по формулам:
        *   x1 = (-b + √(D)) / (2a)
        *   x2 = (-b - √(D)) / (2a)
    *   Если D = 0, вычислите один вещественный корень x = -b / (2a). В этом случае уравнение имеет два совпадающих корня.
    *   *Если D < 0, выведите сообщение "Вещественных корней нет." и завершите выполнение программы.*

5.  Вывод результатов: Выведите на консоль значения коэффициентов a, b, c и вычисленные корни x1 и x2.  Используйте функцию printf для форматированного вывода. */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv[]) {
	double a,b,c;
	double x1,x2,d;
	
	a=5.3;
	b=2.6;
	c=1.4;
	
	printf("vvedite a: \n");
	scanf("%lf, &a");
	printf("vvedite b: \n");
	scanf("%lf, &b");
	printf("vvedite c: \n");
	scanf("%lf, &c");
		
	d=b*b-4*a*c;	
	printf("d=%lf\n",d );
	
	if (d>0) {
		x1=(-b+sqrt(d)/(2*a));
		x2=(-b-sqrt(d)/(2*a));
		printf("x1=%lf\n",x1);
		printf("x2=%lf\n",x2);
	}
	
	if (d==0){
		x1=(-b)/(2*a);
		printf("x1=%lf\n",x1);
	}
	
	if (d<0){
		printf("net korney\n");
	}

	
	return 0;
}




//ЗАДАЧА 3. С ЦИКЛОМ. ДОМАШНЕЕ ЗАДАНИЕ
#include <stdio.h> //бибилиотека ввода-вывода
#include <math.h> //математическая библиотека с функциями
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    char answer[10];
    double a, b, c, d, x1, x2;
    int i; // Для цикла приведения к нижнему регистру

    // Основная часть программы
    a = 0.5; // Значения по умолчанию
    b = 1.2; // Значения по умолчанию
    c = 3.4; // Значения по умолчанию

    for (;;) {
        printf("enter a:\n");
        scanf("%lf", &a);
        printf("ente b:\n");
        scanf("%lf", &b);
        printf("ente c:\n");
        scanf("%lf", &c);

        d = pow(b, 2) - 4 * a * c;
        printf("d = %lf\n", d);

        if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %lf\n", x1);
            printf("x2 = %lf\n", x2);
        } else if (d < 0) {
            printf("There are no roots\n");
        } else {
            x1 = (-b + sqrt(d)) / (2 * a);
            printf("x = %lf\n", x1);
        }

        // Запрос на продолжение
        printf("continue the program yes or no: ");
        scanf("%s", answer);

        // Преобразование к нижнему регистру
        for (i = 0; answer[i]; i++) {
            answer[i] = tolower(answer[i]);
        }

        // Проверка ответа
        if (strcmp(answer, "no") == 0) {
            printf("The program is completed.\n");
            break; // Выход из цикла for
        } else if (strcmp(answer, "yes") == 0) {
            printf("The program starts anew...\n");
        } else {
            printf("Incorrect input. Please enter 'yes' or 'no'.\n");
        }
    }

    return 0;
}

