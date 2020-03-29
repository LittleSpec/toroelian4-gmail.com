#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *vector;
	int pLibre = 0;
	int n, i;
	
	printf("Ingrese el numero que desee para saber cuales son sus divisores\n");
	scanf("%d", &n);
	
	vector = (int *) malloc (1*sizeof(int));
	if (vector == NULL) return 1;
	
	/* Este bloque buscará los divisores de 'n' */
	for (i = 0; i < n; i++)
	{
		printf("%d ", i);
		if (n % i == 0) /* Si el resto de la division de 'n' con 'i' es 0, significa que 'i' es un divisor de 'n' */
		{
			pLibre++;
			vector = (int *) realloc (vector, pLibre*sizeof(int));
			vector[pLibre-1] = i;
		}
	}
	
	/* Este bloque imprimirá los divisores guardados en 'vector' */
	printf("%d", vector[0]);
	for (i = 1; i < pLibre; i++)
	{
		printf(", %d", vector[i]);
	}
	
	return 0;
}
