#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
	char i, a[21], b[21];
	
	scanf("%s %s", a, b);
			
	i = strcmp(a,b);

	if(i == 0 || i == -1)
		printf("%s\n%s\n",a,b);
	else
		printf("%s\n%s\n",b,a);
	
	return 0;
}