#include <stdio.h>
#include <string.h>
int main()
{
	char composicao[1000];
	int cont=0, i;
	double duracao=0.0;
	while(gets(composicao)){
        if(composicao[0]=='*') break;
    	    for(i=0, cont=0; composicao[i]; i++){
        	    if(composicao[i]=='/'){
            	    if(duracao==1.00) cont++;
            	        duracao = 0.00;
        	    }
                else if(composicao[i]=='W')
          	        duracao+=(1.00);
         	 
        	    else if(composicao[i]=='H')
          	    duracao+=(1.00/2.0);
         	 
        	    else if(composicao[i]=='Q')
          	    duracao+=(1.00/4.0);
         	 
        	    else if(composicao[i]=='E')
          	    duracao+=(1.00/8.0);
         	 
        	    else if(composicao[i]=='S')
          	    duracao+=(1.00/16.0);
         	 
        	    else if(composicao[i]=='T')
           	    duracao+=(1.00/32.0);
          	 
        	    else if(composicao[i]=='X')
          	    duracao+=(1.00/64.0);
            }
   	 
    	printf("%d\n", cont);
	}
	return 0;
}
