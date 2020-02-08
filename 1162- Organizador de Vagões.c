#include <stdio.h>
#define tam 51
int main(){
	int N, L[tam], i, posicao, cont, contI, contS, aux, troca, swapping;
	swapping = 0;

	scanf("%d", &N);

	for (cont = 0; cont < N; cont++){
		scanf("%d", &i);
		for (contI = 0; contI < i; contI++){
			scanf("%d", &posicao);
			L[contI] = posicao;
		}
		do{
			troca = 0;
			contS = 0;			
			while (contS < i - 1){
                if (L[contS] > L[contS + 1]){					
					aux = L[contS];
					L[contS] = L[contS + 1];
					L[contS + 1] = aux;
					troca = 1;
					swapping++;					
				}
				contS++;
			}
		} while (troca == 1);
	    printf("Optimal train swapping takes %d swaps.\n", swapping);
	    swapping = 0;
	}
}

