//https://metanit.com/c/tutorial/7.4.php?ysclid=m8toj4g5dz538518143 - пригодилось для работы ( прочитать файл, скопировать файл)

#include <stdio.h>
#include <stdlib.h>

/*Создать текстовый файл с записями 
Прочитать данные из этого файла
записать в другой только те строки, которые относятся к родившимся позднее 1980 года. */



/*FILE*fp=fopen(filename,"r"); - открытие файла в режиме чтения*/

/*FILE* f1 = fopen(filename1,"r"); - объявляет указатель на структуру FILE с именем f1
инициализирует его результатом вызова функции fopen. 
Функция fopen открывает файл, имя которого задано в filename1, в режиме "чтение" ("r").
Если файл успешно открыт, fopen возвращает указатель на структуру FILE,
которая представляет открытый файл.
Если файл не удается открыть (например, файл не существует), fopen возвращает NULL.*/

int main(int argc, char *argv[]) {
	
	char * filename1 = "text_name.txt";
	char * filename2 = "text_pustoy.txt";
	char buffer[256]; //объявление буфера размером 256 символов / объявляет массив символов

	FILE*f1=fopen(filename1,"r");
	FILE*f2=fopen(filename2, "w");
	
	if(!f1 || !f2) //является ли f1 или f2 равным NULL
	{
		printf("ERROR opening file\n");
	}
	else
	{
		while((fgets(buffer, 256, f1))!=NULL) //читает файл f1 построчно, пока не достигнет конца файла или не произойдет ошибка.
		                                    //Функция fgets читает строку из файла, на который указывает f1, и записывает ее в buffer. 
		{
			printf("%s", buffer);
			int t;
			int l = strlen(buffer);
			t = ((int)buffer[l-5]-48)*1000 + ((int)buffer[l-4]-48)*100 + ((int)buffer[l-3]-48)*10 + ((int)buffer[l-2]-48);
			printf("%d", t);
			printf("\n");
			printf("%zu\n", strlen(buffer));

			
			/*if(t>1980){
				fputs(buffer, f2);
			}*/
			
			if (buffer[0] == 'S'){
				fputs(buffer, f2);
			}
			
			
			
		}
		fclose(f1);
		fclose(f2);	
		
	}
	
	
	
	return 0;
}




