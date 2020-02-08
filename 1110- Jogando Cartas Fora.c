#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct Cartas {	
    char carta;
	struct Cartas *prox;
};

typedef struct Cartas TCartas;

typedef struct descrPilha {
    	TCartas *topo, *final;
        int qtd;	
}Dpilha;

void InicializaLista(Dpilha*);
int InserePilha(Dpilha*,int,int);


int main()
{
	int vDescart[55], Cqtd, c=0, k=0;
	Dpilha	descritor;
	TCartas *aux;

	while(scanf("%d", &Cqtd) && Cqtd != 0){
		for(c=0; c < 55; c++)
			vDescart[c] = 0;
        k = 0;
   
    InicializaLista(&descritor);

		for(c=Cqtd; c > 0; c--)	{
			if(InserePilha(&descritor,c,Cqtd) == 2)
                return 2;
        }

		while (descritor.qtd >= 2){
			aux = descritor.topo;
			descritor.topo = aux->prox;
			vDescart[k] = aux->carta;
			free(aux);
			descritor.qtd--;
			k++;
			aux = descritor.topo->prox;
			descritor.final->prox = descritor.topo;
			descritor.final = descritor.topo;
			descritor.topo = aux;
		}

		printf("Discarded cards:");
		for(c=0; c < k; c++){
			printf(" %d", vDescart[c]);
			if(c != k-1)
				printf(",");
		}
		printf("\nRemaining card: %d\n", descritor.final->carta);
	}
	return 0;
}

void InicializaLista(Dpilha *lst){

  	lst->topo = NULL;
		lst->qtd = 0;
}

int InserePilha(Dpilha *lst,int num,int Cqtd){
  TCartas *aux;
  aux = (TCartas *) malloc(sizeof(TCartas));

			if(aux == NULL)
				return 2;

			aux->carta = num;
			aux->prox = lst->topo;

			lst->topo = aux;
			lst->qtd++;

			if(num == Cqtd)
				lst->final = aux;
        return 0;
}