#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Churras{char carne[51]; int data;};

int compara(const void *a, const void *b){
	char aux[51];
	
	struct Churras *i = (struct Churras *)a, *j = (struct Churras *)b;
		
		if (i->data < j->data)
			return -1;
		if (i->data > j->data)
			return 1;
		if (i->data == j->data)
		{
			return strcmp(i->carne,j->carne);
		}
		
}

int main()
{
	int N, aux;
	struct Churras churras[100];
	
	while(scanf("%d", &N) != EOF)
	{
		for(aux = 0; aux < N; aux++)
		{
			scanf("%s %d", &churras[aux].carne, &churras[aux].data);
		}
		
		qsort(churras, N, sizeof(struct Churras), compara);
		
		for(aux = 0; aux < N - 1; aux++)
		{
			printf("%s ", churras[aux].carne);		
		}		
		printf("%s\n", churras[N-1].carne);
		
	}
}
