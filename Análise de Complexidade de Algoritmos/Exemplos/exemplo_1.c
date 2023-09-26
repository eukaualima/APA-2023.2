/*
=---------------=
=-> Cabeçalho <-=
=---------------=
*/
/**
 * @author Kauã dos Santos Lima
 * @since 26/09/2023 
 * @details Calcular valor de passos da função "soma_elementos"
 * @note Exemplo prático da aula de Análise e Projeto de Algoritmos - IFBA Campus Camaçari 2023.2 / Prof. Felipe Oliveira
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
// < Função para fazer o somatório de elementos de um array >
int soma_elementos(int array[], int n)
{
	// < Declaração de variáveis locais >
	int soma = 0, i;
	
	// < Somatório dos elementos >
	for (i = 0; i < n; i++)
	{
		soma += array[i];
	}
	
	// < Retorna o somatório >
	return soma;
}

/*
=------------------------=
=-> Programa Principal <-=
=------------------------=
*/
int main(void)
{
	// < Declaração de variáveis locais >
	int qt_elementos, i, soma, passos;
	
	// < Entrada de dados >
	printf("Informe a quantidade de elementos: ");
	scanf("%i", &qt_elementos);
	
	// < Declaração do vetor >
	int array[qt_elementos];
	
	// < Iteração para adicionar valores aos índices >
	for (i = 0; i < qt_elementos; i++)
	{
		printf("Valor do indice %i: ", i+1);
		scanf("%i", &array[i]);
	}
	
	// < Coleta do somatório >
	soma = soma_elementos(array, qt_elementos);
	
	// < Cálculo dos passos com a fórmula: 2 * n + 3 >
	passos = 2 * qt_elementos + 3;
	
	// < Saída de dados >
	printf("Soma total = %i\n", soma);
	printf("Passos = %i", passos);
	
	return 0;
}
