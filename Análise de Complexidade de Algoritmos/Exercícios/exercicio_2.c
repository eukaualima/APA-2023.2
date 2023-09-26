/*
=---------------=
=-> Cabeçalho <-=
=---------------=
*/
/**
 * @author Kauã dos Santos Lima
 * @since 26/09/2023 
 * @details 1) Achar o maior elemento de um hash md5
 * @note Exemplo prático da aula de Análise e Projeto de Algoritmos - IFBA Campus Camaçari 2023.2 / Prof. Felipe Oliveira
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
// < Função para entrada de dados >
void entrada(char string)
{
	// < Entrada de dados >
	printf("Informe o Hash MD5: ");
	scanf("%s", string);
}

// < Função para mostrar a saída de dados no terminal >
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
	// < Declaração de variáveis locais >
	char md5[32], maior_elemento[32];
	
	// < Entrada de dados >
	entrada(md5);
	
	// < Saída de dados >
	saida(maior_elemento);
	
	return 0;
}
