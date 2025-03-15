#include <stdio.h>
#include <stdbool.h>
#include "myLib.h"
/* 1.�������� �������, ����������� �������� � ������� ������������ �� ��������� ���� ��� ��� ������. 
2. ���������� �� � ��������� ������ (�������� �� ����, ��� �����-�������� ������� main( )).
3. ������ � ������� �������� ���� ������ ������������ (� ��������� �� ������������ ����������� ������������)
4. ������ �� ������� ����������� � ������� ���������� ������� �������� ��� ��������� � �������. */

int main()
{
    double s1;
	double s2;
	double s3;
	
    printf("Enter the first side: ");
    scanf("%lf", &s1);
    
    printf("Enter the second side: ");
    scanf("%lf", &s2);
    
    printf("Enter a third party: ");
    scanf("%lf", &s3);
    
    if (valid(s1,s2,s3))
	{
        printf("Perimeter: %lf\nArea: %lf", perimeter(s1, s2, s3), area(s1, s2, s3));
    } 
	else 
        printf("Mistake");
    return 0;
}
