#include <stdio.h>

int mdc(int n,int m){
  if (n % m == 0)
    return m;
  else{
    return mdc(m , n % m);
  }
}

int main(){
int n,m,aux[100],i=0,x,j;

while(scanf("%d",&n) && scanf("%d",&m) != EOF){
  x = mdc(n,m);
    if(x > 5)
        printf("Noel\n");
    else
        printf("Gnomos\n");

    aux[i] = x ;
    i++;
}

for(j=i-1;j>=0;j--)
    printf("%d ",aux[j]);
    printf("\n");
}