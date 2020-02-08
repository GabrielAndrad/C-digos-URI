#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    int numerador, denominador;
} fracao;

fracao soma(fracao, fracao);
fracao sub(fracao, fracao);
fracao mult(fracao, fracao);
fracao divi(fracao, fracao);
fracao simpl(fracao);

int mdc(int,int);

int main() {
  int n;
  fracao x, y, resp, simpli;
  char operador;

  scanf("%d", &n);

  while(n > 0){
    
	scanf("%d / %d %c %d / %d", &x.numerador, &x.denominador,&operador, &y.numerador, &y.denominador);

  if(operador == '+'){
  	resp = soma(x, y);
  	printf("%d/%d =", resp.numerador, resp.denominador);
  	simpli = simpl(resp);
  	printf(" %d/%d\n", simpli.numerador, simpli.denominador);
	}

   else if(operador == '-'){
  	resp = sub(x, y);
  	printf("%d/%d =", resp.numerador, resp.denominador);
  	simpli = simpl(resp);
  	printf(" %d/%d\n", simpli.numerador, simpli.denominador);
	}

   else if(operador == '*'){
  	resp = mult(x, y);
  	printf("%d/%d =", resp.numerador, resp.denominador);
  	simpli = simpl(resp);
  	printf(" %d/%d\n", simpli.numerador, simpli.denominador);
	}

	else if(operador == '/'){
  	resp = divi(x, y);
  	printf("%d/%d =", resp.numerador, resp.denominador);
  	simpli = simpl(resp);
  	printf(" %d/%d\n", simpli.numerador, simpli.denominador);
	}
	n--;
 
  }
}

fracao soma(fracao n1, fracao n2)
{    
  fracao res;

    res.numerador = n1.numerador * n2.denominador + n2.numerador * n1.denominador;
    res.denominador = n1.denominador * n2.denominador;
    
    return res;
}

fracao sub(fracao n1, fracao n2)
{    
  fracao res;

    res.numerador = n1.numerador * n2.denominador - n2.numerador * n1.denominador;
    res.denominador = n1.denominador * n2.denominador;
    
    return res;
}

fracao mult(fracao n1, fracao n2)
{    
  fracao res;

    res.numerador = n1.numerador * n2.numerador;
    res.denominador = n1.denominador * n2.denominador;
    
    return res;
}

fracao divi(fracao n1, fracao n2)
{    fracao res;

    res.numerador = n1.numerador * n2.denominador;
    res.denominador = n2.numerador * n1.denominador;
    
    return res;
}

fracao simpl(fracao n1)
{    
  fracao res;
  res.numerador = n1.numerador / mdc(n1.numerador, n1.denominador);
    res.denominador = n1.denominador / mdc(n1.numerador, n1.denominador);
    
    return res;
}

int mdc(int m, int n)
{    if (m < 0) m = -m;
    if (n < 0) n = -n;

    if (m % n == 0)
   	 return n;
    else
   	 return mdc(n, m % n);
}
