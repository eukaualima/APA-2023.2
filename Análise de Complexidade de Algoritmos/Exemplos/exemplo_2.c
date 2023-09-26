/*
=---------------=
=-> Cabe�alho <-=
=---------------=
*/
/**
 * @author Kau� dos Santos Lima
 * @since 26/09/2023 
 * @details Dado um array com n elementos, essa fun��o imprime o valor que est� na posi��o i do vetor (Nota��o Big O)
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
// < Fun��o para mostrar qual valor est� na posi��o i do vetor >
int vetor_valor(int array[], int num)
{
	// < Declara��o de vari�veis locais >
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
	// < Declara��o de vari�veis locais >
	int qt_elementos, i, num, passos, passos_programa;
	
	// < Entrada de dados >
	printf("Informe a quantidade de elementos: ");
	scanf("%i", &qt_elementos);
	
	// < Declara��o do vetor >
	int array[qt_elementos];
	
	// < Itera��o para adicionar valores aos �ndices >
	for (i = 0; i < qt_elementos; i++)
	{
		printf("Vetor[%i]: ", i);
		scanf("%i", &array[i]);
	}
	
	// < Questiona qual n�mero ele quer encontrar >
	printf("Procurar posicao do numero: ");
	scanf("%i", &num);
	
	// < Procura o n�mero que o usu�rio escolheu e retorna os passos >
	passos = vetor_valor(array, num);
	passos_programa = passos + 9;
	
	// < Sa�da de dados >
	printf("\n\nForam necessarios %i passos para encontrar o numero %i no vetor.\nA execucao total do programa utilizou %i passos.", passos, num, passos_programa);
	
	return 0;
}
