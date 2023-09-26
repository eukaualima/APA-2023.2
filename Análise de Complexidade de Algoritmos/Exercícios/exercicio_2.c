/*
=---------------=
=-> Cabe�alho <-=
=---------------=
*/
/**
 * @author Kau� dos Santos Lima
 * @since 26/09/2023 
 * @details 1) Achar o maior elemento de um hash md5
 * @note Exemplo pr�tico da aula de An�lise e Projeto de Algoritmos - IFBA Campus Cama�ari 2023.2 / Prof. Felipe Oliveira
 **/
/*
=--------------=
=-> Includes <-=
=--------------=
*/
#include <stdio.h>
#include <string.h>

/*
=------------------=
=-> Subprogramas <-=
=------------------=
*/
// < Fun��o para entrada de dados >
void entrada(char string)
{
	// < Entrada de dados >
	printf("Informe o Hash MD5: ");
	scanf("%s", string);
}

// < Fun��o para mostrar a sa�da de dados no terminal >
void saida(char maior[])
{
	printf("O maior elemento encontrado foi:\t%s", maior);
}

/*
=------------------------=
=-> Programa Principal <-=
=------------------------=
*/
int main(void)
{
	// < Declara��o de vari�veis locais >
	char md5[32], maior_elemento[32];
	
	// < Entrada de dados >
	entrada(md5);
	
	// < Sa�da de dados >
	saida(maior_elemento);
	
	return 0;
}
