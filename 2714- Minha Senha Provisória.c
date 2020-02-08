#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    char RA[21];
    int i,n,j;

    scanf("%d", &n);
    while(n > 0){
        n--;
        scanf("%s", RA);
        
        if(RA[0] != 'R' && RA[1] != 'A' || strlen(RA) < 20){
            printf("INVALID DATA\n");
            continue;
        }
        for(i=2; RA[i] == '0'; i++);
            for(j = i; RA[j] != '\0';j++)
             printf("%c", RA[j]);
         printf("\n");
    }



    
return 0;
}
