#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  
 int n,m,i,cont=0,j,x;
 int *pes;

 while(1){
    scanf("%d%d",&n,&m);
        
    if(n==0 && m==0)
        break; 
   
    pes = (int*)malloc(m*sizeof(int));

    cont=0;    
    for(i=0;i<m;++i) {
      scanf("%d",&x);
      pes[x]++;

      if(pes[x] == 2)
       cont++;
    }
     
    printf("%d\n",cont);
     
 }

}