#include <stdio.h>
#include <stdlib.h>

/* Создать текстовый файл с записями следующего вида:
Иванов Петр Сергеевич 1975
Сидоров Николай Андреевич 1981
…
Воробьянинов Ипполит Матвеевич 1978

Прочитать данные из этого файла
записать в другой только те строки, которые относятся к родившимся позднее 1980 года. */


/*char buffer[256]; - объявление буфера размером 256 символов
FILE*fp=fopen(filename,"r"); - открытие файла в режиме чтения*/

int main(int argc, char *argv[]) {
	
	//чтение текстового файла
	char * filename1 = "text_name.txt";
	char buffer[256];
	FILE*fp=fopen(filename1,"r");
	if(fp)
	{
		while((fgets(buffer, 256, fp))!=NULL)
		{
			printf("%s", buffer);
		}
		fclose(fp);
	}










	
	//копирование списка
	char *filename1 = "text_name";
	char *filename2 = "text_pustoy";
	char buffer[256];
	FILE * f1 = fopen(filename1, "r");
	FILE * f2 = fopen(filename2, "w");
	if(!f1 || !f2)
	{
		printf("ERROR opening file\n");
	}
	else:
		{
			while((fgets(buffer,256,f1))!=NULL)
			{
				fputs(buffer, f2);
				printf("%s", buffer);
			}
		}
	
	
	
	
	
	fclose(f1);
	fclose(f2);
	
	return 0;
}
