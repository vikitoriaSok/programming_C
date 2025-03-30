#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Объявить вещественные переменные a, b и с и задать их значения. 
Предполагая, что a, b, c есть коэффициенты квадратного уравнения вывести на консоль значения их корней х1, х2. 
Следует подобрать такие значения коэффициентов, при которых корни будут существовать.*/

int main(int argc, char *argv[]) {
  printf("This program will help you solve quadratic equations!\n");
  double a;
  double b;
  double c;
  double x;
  double x1;
  double x2;
  double D;
  
  printf("Enter a: ");
  scanf("%lf", &a);
  
  printf("Enter b: ");
  scanf("%lf", &b);
  
  printf("Enter c: ");
  scanf("%lf", &c);  
  
  D=pow(b,2)-4*a*c;
  printf("Discriminant = %lf\n", D);
  
  if (D>0)
  { 
    x1 = (-b + sqrt(D)) / (2 * a); 
    x2 = (-b - sqrt(D)) / (2 * a); 
    printf ("X1 = %lf \nX2 = %lf", x1,x2);
  }
  	else if (D==0)
  {
    x = -b / (2 * a); 
    printf ("X = %lf", x);
  }
  
  	else 
  {
    printf("The discriminant is negative, there are no roots\n");
  }

    return 0;
}
