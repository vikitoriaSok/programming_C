#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	
 char s[80];
 int i;
 int len;
 
 printf("vvedite stroky do 80ti simvolov:\n");
 scanf("%s", s);
 
 len = strlen(s); 
 
 for(i = 0; i < len; i++)
 
 {
 	
  if(s[i]== 'a')
  {
  s[i] = 'A';
 }
 
  if(s[i]=='b')
  {  
  s[i] = 'B';
 }
 
  if(s[i]=='.')
  {  
  s[i] = '!';
 }
 
 
 }
 
 printf("%s", s); 
 return 0;
 
}


