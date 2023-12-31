/*
=---------------=
=-> Cabe�alho <-=
=---------------=
*/
/**
 * @author Kau� dos Santos Lima
 * @since 28/11/2023
 * @version 19/12/2023
 * @todo Cria��o de um algoritmo recursivo para retornar dados da tabela do Brasileir�o S�rie A
 **/

/*
=--------------=
=-> Includes <-=
=--------------=
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
=----------------=
=-> Estruturas <-=
=----------------=
*/
struct time
{
	char nome[100];
	int pontos;
	int posicao;
};

typedef struct time T_TIME;

/*
=------------------=
=-> Subprogramas <-=
=------------------=
*/
// < Fun��o para fazer a busca de times e suas respectivas posi��es >
int buscar(T_TIME t[], char nome[], int i)
{
	if (i > 19)
	{
		printf("\n\n>-----------------<[ B U S C A ]>-----------------<\n");
		printf(">[!]< Este time nao existe na tabela.\n\n");
		system("PAUSE");
		return -1;
	}
	else if (strcasecmp(nome, t[i].nome) == 0)
	{
		printf("\n>[!]< Time encontrado! Gerando informacoes...\n");
		return i;
	}
	else
	{
		return buscar(t, nome, i+1);
	}
}

// < Procedimento para impress�o do time >
void imprimir(T_TIME t[], int i)
{		
	// < Declara��o de vari�veis locais >
	int j, len_nome;
	char temp_nome[100];
	
	// < Passa o nome do time para a vari�vel tempor�ria >
	strcpy(temp_nome, t[i].nome);	
	
	// < Coloca o nome do time em UpperCase >
	strupr(temp_nome);
	
	// < Tamanho do nome do time >
	len_nome = strlen(t[i].nome);	
	
	// < Itera��o para impress�o do nome espa�ado >		
	printf("\n>-----------------<[ ");
	for (j = 0; j < len_nome; j++)
	{
		printf("%c ", temp_nome[j]);
	}
	printf("]>-----------------<\n");
	
	// < Impress�o da busca encontrada >	
	printf("\n|----------|---------|\n| Posicao  | Pontos  |\n|----------|---------|\n\t%i\t%i\t\n\n", t[i].posicao, t[i].pontos);
	system("PAUSE");
}

// < Procedimnto principal da busca >
void buscaMain(T_TIME t[])
{
	// < Declara��o de vari�veis locais >
	char nome[100];
	int posicao;
		
	// < Entrada de dados >
	printf(">-----------------<[ B U S C A ]>-----------------<\n\n");
	printf("Nome do time: ");
	scanf("%s", nome);
	
	// < Faz a busca recursivamente >
	posicao = buscar(t, nome, 0);
	
	// < Imprime o resultado da busca >
	if (posicao >= 0)
	{
		imprimir(t, posicao);
	}
}


// < Fun��o para mostrar os 5 primeiros colocados >
int primeiros(T_TIME t[], int i)
{
	if (i > 4)
	{
		system("PAUSE");
		return 0;
	}
	else
	{
		printf("%i.\t%s\t%i\n", t[i].posicao, t[i].nome, t[i].pontos);
		return primeiros(t, i+1);
	}
}

// < Fun��o para mostrar os 5 �ltimos colocados >
int ultimos(T_TIME t[], int i)
{
	if (i >= 15 && i < 20)
	{
		printf("%i.\t%s\t%i\n", t[i].posicao, t[i].nome, t[i].pontos);
		return ultimos(t, i+1);
	}
	else if (i > 19)
	{
		system("PAUSE");
		return 0;
	}
	else
	{
		return ultimos(t, i+1);
	}
}

// < Fun��o para calcular a diferen�a de pontos entre o primeiros colocados >
int diferencaPrimeiros(T_TIME t[], int i)
{
	// < Declara��o de vari�veis locais >
	int diferenca;
	
	if (i > 4)
	{
		system("PAUSE");
		return 0;
	}
	else
	{
		diferenca = t[i].pontos - t[i+1].pontos;
		printf("%s tem %i pontos a mais que %s\n", t[i].nome, diferenca, t[i+1].nome);
		return diferencaPrimeiros(t, i+1); 
	}
}

// < Fun��o para calcular a diferen�a de pontos entre o �ltimos colocados >
int diferencaUltimos(T_TIME t[], int i)
{
	// < Declara��o de vari�veis locais >
	int diferenca;
	
	if (i >= 15 && i < 19)
	{
		diferenca = t[i].pontos - t[i+1].pontos;
		printf("%s tem %i pontos a mais que %s\n", t[i].nome, diferenca, t[i+1].nome);
		return diferencaUltimos(t, i+1); 
	}
	else if (i > 19)
	{
		system("PAUSE");
		return 0;
	}
	else
	{
		return diferencaUltimos(t, i+1); 
	}
}

// < Fun��o para mostrar a metade dos times >
int mostrarMetade(T_TIME t[], int i)
{
	if (i > 9)
	{
		system("PAUSE");
		return 0;
	}
	else
	{
		printf("%i.\t%s\t%i\n", t[i].posicao, t[i].nome, t[i].pontos);
		return mostrarMetade(t, i+1);
	}
}

// < Procedimento para ordenar os times de acordo com a classifica��o atual >
void selectionSort(T_TIME v[], int n, int *ordenada)
{
	// < Declara��o de vari�veis locais >
	int i, im; // im = �ndice de maior valor;
	T_TIME tmp;
	
	if (n > 1)
	{
		// < Zera o maior valor >
		im = 0;
		
		for (i = 1; i < n; i++)
		{
			if (v[i].posicao > v[im].posicao)
			{
				im = i;
			}
		}
		
		// < Faz a troca >
		if (im != n-1)
		{
			tmp = v[n-1];
			
			v[n-1] = v[im]; // Move o maior para o final
			v[im] = tmp;
		}
		
		selectionSort(v, n-1, ordenada);
	}
	else
	{
		printf(">[!]< Tabela ordenada com sucesso usando o algoritmo Selection Sort.\n");
		
		system("PAUSE");
		
		*ordenada = 1;
	}
}

// < Procedimento para ordenar os times de acordo com a classifica��o atual >
void bubbleSort(T_TIME v[], int n, int *ordenada)
{
	int i, fim;
	T_TIME tmp;

	for (fim = n-1; fim > 0; fim--)
	{
		for (i = 0; i < fim; i++)
		{
			if (v[i].posicao > v[i+1].posicao)
			{
				tmp = v[i];
			
				v[i] = v[i + 1];
			
				v[i + 1] = tmp;
			}
			
		}
	}
	
	printf(">[!]< Tabela ordenada com sucesso usando o algoritmo Bubble Sort.\n");
		
	system("PAUSE");
	
	*ordenada = 1;
}

// < Procedimento para ordenar os times de acordo com a classifica��o atual >
void insertionSort(T_TIME v[], int n, int *ordenada)
{
	int i = 0, j = 1;
	T_TIME aux;
	
	while (j < n)
	{
		aux = v[j];
		i = j - 1;
		
		while ((i >= 0) && (v[i].posicao > aux.posicao))
		{
			v[i+1] = v[i];
			i = i - 1;
		}
		
		v[i + 1] = aux;
		
		j = j + 1;
	}
	
	printf(">[!]< Tabela ordenada com sucesso usando o algoritmo Insertion Sort.\n");
		
	system("PAUSE");
	
	*ordenada = 1;
}

// < Procedimento para verificar se a lista est� ordenada e chamar a fun��o solicitada pelo usu�rio >
void verificaOrdenada(char funcao[], int ordenada, T_TIME t[], int i)
{
	// < Limpa o terminal >	
	system("CLS");
	
	// < Verifica se est� ordenado >	
	if (ordenada == 0)
	{
		printf(">[!]< A tabela esta desordenada. Volte ao menu principal e escolha um metodo de ordenacao!\n\n");
		system("pause");
	}
	else
	{
		if (strcmp(funcao, "primeiros") == 0)
		{
			primeiros(t, i);
		}
		else if (strcmp(funcao, "ultimos") == 0)
		{
			ultimos(t, i);
		}
		else if (strcmp(funcao, "diferencaPrimeiros"))
		{
			diferencaPrimeiros(t, i);
		}
		else if (strcmp(funcao, "diferencaUltimos"))
		{
			diferencaUltimos(t, i);
		}
		else if (strcmp(funcao, "mostrarMetade"))
		{
			mostrarMetade(t, i);
		}
	}
}

// < Procedimento para o usu�rio controlar o que deseja fazer >
void menu(T_TIME t[])
{
	// < Declara��o de vari�veis locais >
	char nome[100];
	int opcao, posicao, ordenada = 0;
	
	// < Loop do menu >
	do 
	{
		// < Limpa o terminal >		
		system("cls");
		
		// < Imprime o menu >		
		printf(">-----------------<[ B R A S I L E I R A O ]>-----------------<\nEscolha abaixo uma das opcoes que deseja acessar:\n[1]: Buscar um time e sua posicao\n\t=> Veja em qual posi��o da serie A seu time esta.\n[2]: 5 primeiros colocados\n\t=> Verifique os times mais bem colocados.\n[3]: 5 ultimos colocados.\n\t=> Verifique os times que estao na zona de rebaixamento.\n[4]: Diferenca de pontos entre os 5 primeiros.\n\t=> Saiba a diferenca de pontos entre os primeiros colocados.\n[5]: Diferenca de pontos entre os 5 ultimos.\n\t=> Saiba a diferenca de pontos entre os ultimos colocados.\n[6]: 10 primeiros times.\n\t=> Reordena os times e mostra metade dos times com base nos pontos.\n[7]: Selection Sort.\n\t=> Ordena os times com o algoritmo Selection Sort.\n[8]: Bubble Sort.\n\t=> Ordena os times com o algoritmo Bubble Sort.\n[9]: Insertion Sort.\n\t=> Ordena os times com o algoritmo Insertion Sort.\n[0]: Sair do programa\n\t=> Fecha o programa.\n\nSua escolha: ");
		scanf("%i", &opcao);
		
		// < Verifica a op��o escolhida pelo usu�rio >		
		switch(opcao)
		{
			case 1:
				buscaMain(t);
				break;
				
			case 2:
				verificaOrdenada("primeiros", ordenada, t, 0);
				break;
				
			case 3:
				verificaOrdenada("ultimos", ordenada, t, 0);
				break;
				
			case 4:
				verificaOrdenada("diferencaPrimeiros", ordenada, t, 0);
				break;
				
			case 5:
				verificaOrdenada("diferencaUltimos", ordenada, t, 0);
				break;
			
			case 6:
				verificaOrdenada("mostrarMetade", ordenada, t, 0);
				break;
			
			case 7:
				if (ordenada == 0)
				{
					system("CLS");
					
					selectionSort(t, 19, &ordenada);
				}
				else
				{
					system("CLS");
					
					printf("\n>[!]< Tabela ja foi ordenada!\n\n");
					
					system("PAUSE");
				}
				break;
			
			case 8: 
				if (ordenada == 0)
				{
					system("CLS");
					
					bubbleSort(t, 19, &ordenada);
				}
				else
				{
					system("CLS");
					
					printf("\n>[!]< Tabela ja foi ordenada!\n\n");
					
					system("PAUSE");
				}
				break;
			
			case 9: 
				if (ordenada == 0)
				{
					system("CLS");
					
					insertionSort(t, 19, &ordenada);
				}
				else
				{
					system("CLS");
					
					printf("\n>[!]< Tabela ja foi ordenada!\n\n");
					
					system("PAUSE");
				}
				break;
			
			case 10: 
			
				break;
			
			case 0:
				// < Limpa o terminal >				
				system("CLS");
				
				// < Informa que foi finalizado >
				printf(">[!]< Programa finalizado com sucesso!");				
				
				// < Encerra o programa com o c�digo 1 >				
				exit(1);	
				break;
				
			default:
				printf("\n>[!]< Escolha uma op��o v�lida.\n");
				break;
		}
	} while (opcao != 0);
}

/*
=------------------------=
=-> Programa Principal <-=
=------------------------=
*/
int main (void)
{
	// < Declara��o de vari�veis locais >
	T_TIME t[20];
	
	// < Adi��o dos times no vetor t >
	strcpy(t[0].nome, "Athletico-PR");
	t[0].pontos = 52;
	t[0].posicao = 8;
	
	strcpy(t[1].nome, "America-MG");
	t[1].pontos = 21;
	t[1].posicao = 20;
	
	strcpy(t[2].nome, "Atletico-MG");
	t[2].pontos = 60;
	t[2].posicao = 4;
	
	strcpy(t[3].nome, "Botafogo");
	t[3].pontos = 62;
	t[3].posicao = 3;
	
	strcpy(t[4].nome, "Fluminense");
	t[4].pontos = 53;
	t[4].posicao = 7;
	
	strcpy(t[5].nome, "Bragantino");
	t[5].pontos = 59;
	t[5].posicao = 6;
	
	strcpy(t[6].nome, "Gremio");
	t[6].pontos = 59;
	t[6].posicao = 5;
	
	strcpy(t[7].nome, "Palmeiras");
	t[7].pontos = 63;
	t[7].posicao = 1;
	
	strcpy(t[8].nome, "Cuiaba");
	t[8].pontos = 48;
	t[8].posicao = 9;
	
	strcpy(t[9].nome, "Sao Paulo");
	t[9].pontos = 47;
	t[9].posicao = 10;
	
	strcpy(t[10].nome, "Vasco da Gama");
	t[10].pontos = 42;
	t[10].posicao = 16;
	
	strcpy(t[11].nome, "Fortaleza");
	t[11].pontos = 45;
	t[11].posicao = 12;
	
	strcpy(t[12].nome, "Corinthians");
	t[12].pontos = 44;
	t[12].posicao = 14;
	
	strcpy(t[13].nome, "Cruzeiro");
	t[13].posicao = 13;
	t[13].pontos = 44;
	
	strcpy(t[14].nome, "Santos");
	t[14].pontos = 43;
	t[14].posicao = 15;
	
	strcpy(t[15].nome, "Internacional");
	t[15].pontos = 46;
	t[15].posicao = 11;
	
	strcpy(t[16].nome, "Bahia");
	t[16].pontos = 41;
	t[16].posicao = 17;
	
	strcpy(t[17].nome, "Goias");
	t[17].pontos = 35;
	t[17].posicao = 18;
	
	strcpy(t[18].nome, "Coritiba");
	t[18].pontos = 29;
	t[18].posicao = 19;
	
	strcpy(t[19].nome, "Flamengo");
	t[19].pontos = 63;
	t[19].posicao = 2;
	
	// < Chama o menu >
	menu(t);
	
	return 0;
	
}
