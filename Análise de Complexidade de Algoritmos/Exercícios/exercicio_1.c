/*
=---------------=
=-> Cabe�alho <-=
=---------------=
*/
/**
 * @author Kau� dos Santos Lima
 * @since 26/09/2023 
 * @details 1) Achar o m�ximo elemento de um vetor
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
// < Fun��o para entrada de dados >
void entrada(float *n, float array[])
{
	// < Declara��o de vari�veis locais >
	int i;
	
	// < Entrada de dados >
	for (i = 0; i < 10; i++)
	{
		printf("Numero %i/10: ", i + 1);
		scanf("%f", n);
		
		array[i] = *n;
	}
}

// < Fun��o para procurar o maior n�mero >
float maior_numero(float array[])
{
	// < Declara��o de vari�veis locais >
	int i;
	float maior_num;
	
	// < Define o maior n�mero >
	maior_num = array[0];
	
	// < Pesquisa o maior n�mero >
	for (i = 0; i < 11; i++)
	{
		if (maior_num < array[i + 1])
		{
			maior_num = array[i + 1];
		}
	}
	
	// < Retorna o maior n�mero encontrado >
	return maior_num;
}

// < Fun��o para mostrar a sa�da de dados no terminal >
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
	// < Declara��o de vari�veis locais >
	float n, array[10], maior_num;
	
	// < Entrada de dados >
	entrada(&n, array);
	
	// < Pesquisa o maior n�mero >
	maior_num = maior_numero(array);
	
	// < Sa�da de dados >
	saida(maior_num);
	
	return 0;
}
