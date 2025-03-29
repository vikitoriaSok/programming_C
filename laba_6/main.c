#include <stdio.h>
#include <stdlib.h>

/* Создать текстовый файл с записями следующего вида:
Иванов Петр Сергеевич 1975
Сидоров Николай Андреевич 1981
…
Воробьянинов Ипполит Матвеевич 1978

Прочитать данные из этого файла
записать в другой только те строки, которые относятся к родившимся позднее 1980 года. */

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
