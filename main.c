#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <locale.h> ��������� ����� �� �������

/*
1. ���������� � ������������ ������ 2 ������� - 2 ������� ������������ n �� n � ���������� ���� double (� �������). 
2. ������ � ������� ���� ��������: '+', '-' ��� '*'. 
3. �������� �������, ����������� ���-��, �������� ��� ������������ ������ ������ (�� �������� �� ���������) ������-������ ��������� �� ������-���������. 
4. ���������� ��� ������� � ��������� ������ (�������� �� ����, ��� ������������� ������� main()). 
5.������ �� ������� �������� ��-��������� �������. */

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




