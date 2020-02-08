#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Pais {char nome[100];int ouro,prata,bronze;};

int compara (const void *a, const void *b){

  struct Pais *i = (struct Pais *)a, *j = (struct Pais *)b;

  if(i->ouro < j->ouro)
     return 1;
  if(i->ouro > j->ouro)
     return -1;
  else
      if(i->prata < j-> prata)
         return 1;
      if(i->prata > j->prata)
         return -1;
      else
          if(i->bronze < j-> bronze)
             return 1;
          if(i->bronze > i-> bronze)
             return -1;
          else
          if(strcmp(i->nome,j->nome)==1)
          return 1;
          else
          return -1;

}
int main(){
   int teste,i,aux;
   struct Pais pais[100];
   
   scanf("%d",&teste);

   for(i=0;i<teste;i++){
      scanf("%s %d %d %d\n",&pais[i].nome,&pais[i].ouro,&pais[i].prata,&pais[i].bronze);
   }

   qsort(pais, teste, sizeof(struct Pais), compara);
   
   for(i=0;i<teste;i++){
		printf("%s %d %d %d\n", pais[i].nome, pais[i].ouro, pais[i].prata, pais[i].bronze);
   }

}
