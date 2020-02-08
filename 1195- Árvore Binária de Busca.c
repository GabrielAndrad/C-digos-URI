#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct arv{
    int valor;
    struct arv *esq,*dir;
}arv;

void ImprimeArvore(arv*,int );
arv *AchaPai(arv*,int);
arv *InsereArvore(int, arv*);

int main(){

 arv *raiz;
 int casos,i=1,tam,Vinfo,j;
 
 raiz = NULL;
 
 scanf("%d",&casos);
 
 
 while(i<=casos){
	 raiz = NULL;
	 scanf("%d",&tam);

	 for(j=0;j<tam;j++){
		 scanf("%d",&Vinfo);	 
		 raiz = InsereArvore(Vinfo,raiz);
     }
 
    printf("Case %d:", i);

	printf("\nPre.:");
	ImprimeArvore(raiz,1);

	printf("\nIn..:");
	ImprimeArvore(raiz,2);

	printf("\nPost:");
	ImprimeArvore(raiz,3);

	printf("\n\n");
    i++;
}	


}


arv *InsereArvore (int Vinfo,arv *raiz){
	arv *aux,*pai;
	
	aux = (arv*) malloc(sizeof(arv));
	
	aux->valor = Vinfo;
	aux->esq = NULL;
	aux->dir = NULL;
	
	pai = AchaPai(raiz,Vinfo);
	
	if(pai == NULL)
		raiz = aux;
	else
		if (Vinfo <= pai->valor)
				pai->esq = aux;
			else
				pai->dir = aux;
	return raiz;
	
}
 void ImprimeArvore(arv *raiz, int tipo)
 {
	 if(raiz != NULL)
	{
		if(tipo == 1){
			printf(" %d", raiz->valor);
			ImprimeArvore(raiz->esq,1);
			ImprimeArvore(raiz->dir,1);
		}
		if(tipo == 2){
			ImprimeArvore(raiz->esq,2);
			printf(" %d", raiz->valor);
			ImprimeArvore(raiz->dir,2);
		}
		if(tipo == 3){
			ImprimeArvore(raiz->esq,3);
			ImprimeArvore(raiz->dir,3);
			printf(" %d", raiz->valor);
		}
	}
 }
 
 
 arv *AchaPai(arv *r, int v)
{	if (r == NULL)
	/* Arvore vazia */
		return NULL;
	else
		if (v <= r->valor)
		/* Novo noh deve ficar a esquerda de r */
			if (r->esq == NULL)
				return r;
			else
				return AchaPai(r->esq, v);
		else
		/* Novo noh deve ficar a direita de r */
			if (r->dir == NULL)
				return r;
			else
				return AchaPai(r->dir, v);
}