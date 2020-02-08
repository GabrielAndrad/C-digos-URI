#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int linhas,colunas,i,j,k,l,cont=0,x;
  while(1){
    scanf("%d",&linhas);
    scanf("%d",&colunas);

    if(linhas == 0 && colunas == 0)
    break;

    int **matriz = (int**)malloc(colunas * sizeof(int*));
  
    for(i=0;i<colunas;i++){
        matriz[i] = (int*)malloc(linhas * sizeof(int));
        for(j=0;j<linhas;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

  for(k=0;k<linhas;k++){     
    for(l=0,cont=0;l<colunas;l++){
        cont+= matriz[l][k];
    }
         if(cont == colunas){
             printf("yes\n");
             break; 
        }else 
            cont=0;
    }

  if(cont==0)
     printf("no\n");
  
  }
}