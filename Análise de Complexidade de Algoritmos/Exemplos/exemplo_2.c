/*
=---------------=
=-> Cabeçalho <-=
=---------------=
*/
/**
 * @author Kauã dos Santos Lima
 * @since 26/09/2023 
 * @details Dado um array com n elementos, essa função imprime o valor que está na posição i do vetor (Notação Big O)
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
// < Função para mostrar qual valor está na posição i do vetor >
int vetor_valor(int array[], int num)
{
	// < Declaração de variáveis locais >
	int i, passos = 0;
	
	// < Busca o valor >
	for (i = 0; i < num; i++)
	{
		passos++;
		if (array[i] == num)
		{
			printf("\n\n%i esta na posicao %i do vetor.", num, i);
			break;
		}
	}
	
	// < Retorna os passos >
	return (passos + 3);
}

/*
=------------------------=
=-> Programa Principal <-=
=------------------------=
*/
int main(void)
{
	// < Declaração de variáveis locais >
	int qt_elementos, i, num, passos, passos_programa;
	
	// < Entrada de dados >
	printf("Informe a quantidade de elementos: ");
	scanf("%i", &qt_elementos);
	
	// < Declaração do vetor >
	int array[qt_elementos];
	
	// < Iteração para adicionar valores aos índices >
	for (i = 0; i < qt_elementos; i++)
	{
		printf("Vetor[%i]: ", i);
		scanf("%i", &array[i]);
	}
	
	// < Questiona qual número ele quer encontrar >
	printf("Procurar posicao do numero: ");
	scanf("%i", &num);
	
	// < Procura o número que o usuário escolheu e retorna os passos >
	passos = vetor_valor(array, num);
	passos_programa = passos + 9;
	
	// < Saída de dados >
	printf("\n\nForam necessarios %i passos para encontrar o numero %i no vetor.\nA execucao total do programa utilizou %i passos.", passos, num, passos_programa);
	
	return 0;
}
