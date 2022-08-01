#include <stdio.h>
#include <stdlib.h>

int fibonacci(int i1);

main()
{
	int x, i, n, z;
	printf("Ingresar la cantidad de numeros: ");
	scanf("%d", &x);
	for (i = 0; i <= x-1; i++)
	{
		z = fibonacci(i);
		printf("%d ", z);
	}
}

int fibonacci(int i1)
{
	if (i1 < 2)
	{
		return i1;
	}
	else
	{
		return fibonacci(i1 - 1) + fibonacci(i1 - 2);
	}	
}