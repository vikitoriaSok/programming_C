#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <locale.h> ïðèíèìàåò òåêñò íà ðóññêèé

/*
1. Ðàçìåñòèòü â äèíàìè÷åñêîé ïàìÿòè 2 ìàññèâà - 2 ìàòðèöû ðàçìåðíîñòüþ n íà n ñ ýëåìåíòàìè òèïà double (ñ êîíñîëè). 
2. Ââåñòè ñ êîíñîëè çíàê îïåðàöèè: '+', '-' èëè '*'. 
3. Íàïèñàòü ôóíêöèþ, âû÷èñëÿþùóþ ñóì-ìó, ðàçíîñòü èëè ïðîèçâåäåíèå äàííûõ ìàòðèö (èõ ïåðåäàòü ïî óêàçàòåëþ) âîçâðà-ùàþùóþ óêàçàòåëü íà ìàññèâ-ðåçóëüòàò. 
4. Ðàçìåñòèòü ýòó ôóíêöèþ â îòäåëüíîì ìîäóëå (îòëè÷íîì îò òîãî, ãäå ðàñïîëàãàåòñÿ ôóíêöèÿ main()). 
5.Âûäàòü íà êîíñîëü çíà÷åíèÿ ïî-ëó÷åííîãî âåêòîðà. */

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




