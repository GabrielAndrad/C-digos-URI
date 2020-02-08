#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string.h>

int main()
{
	int T, vetor[4], i, j, k, aux, resp;
	int n;
	char conv[6];

	scanf ("%d", &T);

  for (aux=1; aux<=T;aux++) {
    scanf("%s", conv);

    if (strcmp (conv, "min") == 0){
      for (k=0; k<3; k++)
        scanf ("%d", &vetor[k]);
    
      n = vetor[0];
    
      for (k=0; k<3; k++){
		    if (vetor[k] < n) {
                n = vetor[k];
            }
      }

      resp = n;
      printf ("Caso #%d: %d\n", aux, resp);    
    }else
        if (strcmp (conv, "max") == 0){
            for (k=0; k<3; k++)
                scanf ("%d", &vetor[k]);
    
             n = vetor[0];
    
      for (k=0; k<3; k++){
		    if (vetor[k] > n){
			    n = vetor[k];
            }
      }

      resp = n;
      printf ("Caso #%d: %d\n",aux, resp);    
    } else
        if (strcmp (conv, "eye") == 0){
            for (k=0; k<3; k++)
                scanf ("%d", &vetor[k]);
                resp = (0.30*vetor[0]) + (0.59*vetor[1]) + (0.11*vetor[2]);
                printf ("Caso #%d: %d\n", aux, resp);    
            }
        if (strcmp (conv, "mean") == 0){
            for (k=0; k<3; k++)
                scanf ("%d", &vetor[k]);
                resp = (vetor[0] + vetor[1] + vetor[2]) / 3;
                printf ("Caso #%d: %d\n",aux, resp);    
    }
  }
}