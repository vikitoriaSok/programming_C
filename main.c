#include <stdio.h>
#include <stdlib.h>

/* ������� ��������� ���� � �������� ���������� ����:
������ ���� ��������� 1975
������� ������� ��������� 1981
�
������������ ������� ��������� 1978

��������� ������ �� ����� �����
�������� � ������ ������ �� ������, ������� ��������� � ���������� ������� 1980 ����. */

int main(int argc, char *argv[]) {
	
	//FILE * f1;
	//f1=foren("text.txt", "r");
	char * filename = "text.txt";
	char buffer[256];
	FILE*fp=fopen(filename,"r");
	if(fp)
	{
		while((fgets(buffer, 256, fp))!=NULL)
		{
			printf("%s", buffer);
		}
		fclose(fp);
	}
	
	
	return 0;
}
