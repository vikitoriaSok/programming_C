/*Тип «структура» в языке Си — это композитный тип данных, объединяющий данные разных типов под одним именем.
Он позволяет трактовать группу связанных между собой объектов не как множество отдельных элементов, а как единое целое.*/


#include <stdio.h>
#include <stdlib.h>

/*
1. Объявить тип-структуру humen, включающую имя человека, фамилию и год рождения.
2. Объявить два массива из четырёх элементов типа humen.

3. Ввести с консоли или из файла элементы одного массива
4. Построить на их основе другой, упорядочив элементы по годам рождения. 
5. Вывести результат. */

	struct humen
	{
		char name[100];
		char sname[100];
		int year;	
	} ;

int main(int argc, char *argv[]) {
	
	int N=4;//элемент массива из 4х
	int i;//переменная для цикла
	
    struct humen h1[N];
    struct humen h2[N];


	
	for (i=0; i<N;i++)
	{
		printf("Enter %d persen: \n" , i+1);
		
		printf("Enter a name: ");	
		scanf("%s",h1[i].name);
		
		printf("Enter your middle name: ");
		scanf("%s", h1[i].sname);
		
		printf("Enter year of birth: ");
		scanf("%d", &h1[i].year);	
	}
	
	for (i=0; i<N;i++)
	{
		printf("Name: %s. ", h1[i].name);
		printf("Middle name: %s. ",  h1[i].sname);
		printf("Birth: %d. ", h1[i].year);
		printf("\n");
		
		h2[i] = h1[i];	
	}

	
	int temp;//3-я переменная для хранения значения
	
	for (int k=0; k<N-1; k++){
		for (i=0;i<N-1;i++){
			if(h2[i].year>h2[i+1].year){		//a,b,c
				temp = h2[i+1].year;			//c=b
				h2[i+1].year = h2[i].year;		//b=a
				h2[i].year = temp;				//a=c		
			}
		}
	}
	printf("RESULT:\n");
	for (i=0; i<N;i++)
	{
		printf("Name: %s. ", h2[i].name);
		printf("Middle name: %s. ",  h2[i].sname);
		printf("Birth: %d. ", h2[i].year);
		printf("\n");	
	}	
	
	return 0;
}











/7.2
	#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
1. Объявить тип-структуру humen, включающую имя человека, фамилию и год рождения.
2. Объявить два массива из четырёх элементов типа humen.

3. Ввести с консоли или из файла элементы одного массива
4. Построить на их основе другой, упорядочив элементы по годам рождения. 
5. Вывести результат. */

struct humen {
	char name[100];
	char sname[100];
	int year;
};

int main(int argc, char *argv[]) {
	
	/*int N = 4;
	char * filename1 = "text_name.txt";
	FILE*f1 = fopen("filename1", r);
	
	struct humen h1[N];
	struct humen h2[N];
	*/
	
	struct humen n;

	
	char str[] =  "mefed vika 2006";

	
	char str2[] = "Ivanov Sergey 1978";
	char *substring;
	//substring = str + 6;
	//substring[4] = '\0';
	//printf("%s", substring);
	
	//n.sname = 
	
	int l=strlen(str);
	printf("Lenght = %d\n", l);
	strcpy(n.sname,str);
	char *p;
	p=strchr(str,' ');
	printf("%c\n", p);
	n.sname[4] = '\0';
	
	printf("%s\n",n.sname );
	/*for (int i=0;i<l-1;i++){
		printf("%s\n", str[i]);
		/*if (str[i]=' '){
			substring = str;
			substring[i] = '\0';
			printf("%s", substring);
		}
	}*/
	
	
	printf("end %d\n", l);
	
	return 0;
}
