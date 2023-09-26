/*
=---------------=
=-> Cabe�alho <-=
=---------------=
*/
/**
 * @author Kau� dos Santos Lima
 * @since 26/09/2023 
 * @details Dado um array com n elementos, verifique se um determinado elemento est� presente no array criado
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
// < Fun��o para mostrar qual valor est� na posi��o i do vetor e retornar os passos da fun��o >
int vetor_valor(int array[], int num)
{
	// < Declara��o de vari�veis locais >
	int i, passos = 0, flag_achou = 0;
	
	// < Busca o valor >
	for (i = 0; i < num; i++)
	{
		passos++;
		
		if (array[i] == num)
		{
			printf("\n\n%i faz parte do vetor.", num);
			
			flag_achou = 1; // achou o n�mero
		
			break; // quebra o loop
		}
	}
	
	// < Verifica se a flag encontrou o n�mero >
	if (flag_achou == 0)
	{
		printf("%i nao faz parte do vetor.", num);
	}
	
	// < Retorna os passos >
	return (passos + 8);
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
	printf("Procurar o numero: ");
	scanf("%i", &num);
	
	// < Procura o n�mero que o usu�rio escolheu e retorna os passos >
	passos = vetor_valor(array, num);
	passos_programa = passos + 9;
	
	// < Sa�da de dados >
	printf("\n\nForam necessarios %i passos para pesquisar o numero %i no vetor.\nA execucao total do programa utilizou %i passos.", passos, num, passos_programa);
	
	return 0;
}
