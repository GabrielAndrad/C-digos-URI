#include <stdio.h>

int i;
int fibonacci (int n){
  i++;
  if(n == 0)
    return 0;
    if(n==1)
        return 1;
        if(n>=2)
            return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
  int n,j;
  int fib,teste;
  
  scanf("%d",&teste);

  for(j=0;j<teste;j++) {
  scanf("%d",&n);
  fib = fibonacci(n);
  printf("fib(%d) = %d calls = %d\n",n,i-1,fib);
  i=0;
  }
}