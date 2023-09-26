/*
=---------------=
=-> Cabe�alho <-=
=---------------=
*/
/**
 * @author Kau� dos Santos Lima
 * @since 26/09/2023 
 * @details Calcular valor de passos da fun��o "soma_elementos"
 * @note Exemplo pr�tico da aula de An�lise e Projeto de Algoritmos - IFBA Campus Cama�ari 2023.2 / Prof. Felipe Oliveira
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
// < Fun��o para fazer o somat�rio de elementos de um array >
int soma_elementos(int array[], int n)
{
	// < Declara��o de vari�veis locais >
	int soma = 0, i;
	
	// < Somat�rio dos elementos >
	for (i = 0; i < n; i++)
	{
		soma += array[i];
	}
	
	// < Retorna o somat�rio >
	return soma;
}

/*
=------------------------=
=-> Programa Principal <-=
=------------------------=
*/
int main(void)
{
	// < Declara��o de vari�veis locais >
	int qt_elementos, i, soma, passos;
	
	// < Entrada de dados >
	printf("Informe a quantidade de elementos: ");
	scanf("%i", &qt_elementos);
	
	// < Declara��o do vetor >
	int array[qt_elementos];
	
	// < Itera��o para adicionar valores aos �ndices >
	for (i = 0; i < qt_elementos; i++)
	{
		printf("Valor do indice %i: ", i+1);
		scanf("%i", &array[i]);
	}
	
	// < Coleta do somat�rio >
	soma = soma_elementos(array, qt_elementos);
	
	// < C�lculo dos passos com a f�rmula: 2 * n + 3 >
	passos = 2 * qt_elementos + 3;
	
	// < Sa�da de dados >
	printf("Soma total = %i\n", soma);
	printf("Passos = %i", passos);
	
	return 0;
}
