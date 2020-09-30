#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL));
	int test = rand();
	int variable = rand();

	printf ("El numero aleatorio de test vale %d\n", test);
	printf ("Otros numeros aleatorios son: %d\n",rand()) ;
	printf("La constante RAND_MAX vale %d\n", RAND_MAX);

	return (0);
}
