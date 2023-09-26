/*
=---------------=
=-> Cabeçalho <-=
=---------------=
*/
/**
 * @author Kauã dos Santos Lima
 * @since 26/09/2023 
 * @details 1) Achar o máximo elemento de um vetor
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
// < Função para entrada de dados >
void entrada(float *n, float array[])
{
	// < Declaração de variáveis locais >
	int i;
	
	// < Entrada de dados >
	for (i = 0; i < 10; i++)
	{
		printf("Numero %i/10: ", i + 1);
		scanf("%f", n);
		
		array[i] = *n;
	}
}

// < Função para procurar o maior número >
float maior_numero(float array[])
{
	// < Declaração de variáveis locais >
	int i;
	float maior_num;
	
	// < Define o maior número >
	maior_num = array[0];
	
	// < Pesquisa o maior número >
	for (i = 0; i < 11; i++)
	{
		if (maior_num < array[i + 1])
		{
			maior_num = array[i + 1];
		}
	}
	
	// < Retorna o maior número encontrado >
	return maior_num;
}

// < Função para mostrar a saída de dados no terminal >
void saida(float maior)
{
	printf("O maior numero encontrado foi:\t%.2f", maior);
}

/*
=------------------------=
=-> Programa Principal <-=
=------------------------=
*/
int main(void)
{
	// < Declaração de variáveis locais >
	float n, array[10], maior_num;
	
	// < Entrada de dados >
	entrada(&n, array);
	
	// < Pesquisa o maior número >
	maior_num = maior_numero(array);
	
	// < Saída de dados >
	saida(maior_num);
	
	return 0;
}
