#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
	char i, j, k, palavra[101];
	
	while (scanf("%s", palavra) != EOF){
		for(i=0; i < strlen(palavra); i++){
			for (j = 0; j < strlen(palavra) - i; j++){
				if (j == strlen(palavra)-i-1)
					printf("%c\n", palavra[j]);
				else
					printf("%c ", palavra[j]);
			}
      if(i == strlen(palavra)-1){
        printf("\n");
        break;
      }else 
         for (k=0; k<i+1; k++){
          printf(" ");
        }
	   }
	}
	return 0;
}