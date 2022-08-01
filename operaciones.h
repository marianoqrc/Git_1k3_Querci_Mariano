#include <stdio.h>
/*int suma(int x, int y, int &z);
int resta(int x, int y, int &z);
int mult(int x, int y, int &z);
float div(int x, int y, float &z);

main()
{
	int w, i, z;
	float j;
	printf("asdasd: ");
	scanf("%d", &w);
	printf("wsds: ");
	scanf("%d", &i);
	
	printf("%d", suma(w, i, z));
	
	
	printf("\n%d", resta(w, i, z));
	
	
	printf("\n%d", mult(w, i, z));
	
	
	printf("\n%.2f", div(w, i, j));
}
*/

int suma(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
int resta(int x, int y)
{
	int z;
	z = x - y;
	return z;
}
int mult(int x, int y)
{
	int z;
	z = x * y;
	return z;
}
float div(int x, int y)
{
	float j;
	j = x / y;
	return j;	
}
