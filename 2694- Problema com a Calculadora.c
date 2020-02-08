#include <stdio.h>
#include <string.h>
int main() {

 int n, cont, i,t, soma;
 char a[15];
 scanf("%d", &t);

 for(i = 0; i < t; i++){
   scanf("%s", a);
   for(cont = 0; cont < 14; cont++){
     if (a[cont] > 48 && a[cont] <= 57)
       a[cont] = a[cont] - 48;
     else
       a[cont] = 0;}

   soma = (a[2] * 10 + a[3]) + (a[5] * 100 + a[6] * 10 + a[7]) + (a[11] * 10 + a[12]);

   printf("%d\n", soma);}

 return 0;
}