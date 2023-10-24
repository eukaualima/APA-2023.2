/*
=---------------=
=-> Cabe�alho <-=
=---------------=
*/
/**
 * @author Kau� dos Santos Lima
 * @since 17/10/2023
 * @details Ordenacao de vetores usando Selection Sort.
 * @note Verficacao de eficiencia de algoritmos (1/2).
 **/
 
/*
=--------------=
=-> Includes <-=
=--------------=
*/
#include <stdio.h>

/*
=------------------=
=-> Subprogramas <-=
=------------------=
*/
// Procedimento para imprimir na tela a ordenacao dos numeros
void print_ordenacao(int vetor_original[], int vetor_ordenado[])
{
	// < Declara��o de vari�veis locais >
	int i;
	
	// < La�o for para impress�o do vetor original >
	for (i = 0; i < 8; i++)
	{
		printf("%i\t", vetor_original[i]);	
	}
	
	printf("\n\n");
	
	for (i = 0; i < 8; i++)
	{
		printf("%i\t", vetor_ordenado[i]);
	}
}

// Procedimento para a aplicacao do Selection Sort
void selection_sort(int vetor_original[], int vetor_ordenado[])
{
	// < Declara��o de vari�veis locais >
	int valor_min, i, j, aux;
	
	// < Ordena��o em SelectionSort >
	for (i = 0; i < 8; i++)
	{
		valor_min = i; // Posi��o que ser� ordenada
				
		for (j = i+1; j < 8; j++)
		{
			if (vetor_ordenado[j] < vetor_ordenado[valor_min])
			{
				valor_min = j;
			}
		}
		aux = vetor_ordenado[valor_min];
		vetor_ordenado[valor_min] = vetor_ordenado[i];
		vetor_ordenado[i] = aux;
	}
	
	// < Faz a impress�o da ordena��o >
	print_ordenacao(vetor_original, vetor_ordenado);
}

/*
=------------------------=
=-> Programa principal <-=
=------------------------=
*/
int main(void)
{
	// < Declara��o de vari�veis locais >
	int elementos[] = {5, 1, 12, -5, 16, 2, 12, 14}, elementos_ordenados[] = {5, 1, 12, -5, 16, 2, 12, 14};
	
	// < Ordena os elementos em SelectionSort >
	selection_sort(elementos, elementos_ordenados);
	
	return 0;
}
