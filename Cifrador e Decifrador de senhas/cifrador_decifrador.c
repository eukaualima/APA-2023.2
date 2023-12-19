/*
=---------------=
=-> Cabeçalho <-=
=---------------=
*/
/**
 * @author Kauã dos Santos Lima
 * @since 05/12/2023
 * @version 05/12/2023
 * @todo Criação de um programa recursivo para criptografia de textos e senhas
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

/*
=------------------=
=-> Subprogramas <-=
=------------------=
*/
// < Função do algoritmo de cifragem >
/**
 * De "a" a "z" usa-se a sequência de 33 a 58 da tabela ascii (-32)
 * De "A" a "F" usa-se a sequência de 59 a 64 da tabela ascii (-6)
 * De "G" a "J" usa-se a sequência de 123 a 126 da tabela ascii (+52)
 * De "K" a "U" usa-se a sequência de 173 a 183 da tabela ascii (+98)
 * De "V" a "Z" usa-se a sequência de 129 a 133 da tabela ascii (+43)
 * De 33 a 47 na tabela ascii troca pela sequência 108 a 122 (+75)
 * De 48 a 57 na tabela ascii troca pela sequência 70 a 79 (+22)
 */
void cifrarSenha(unsigned char senha_plana[], unsigned char senha_cifrada[], int qt_c, int i)
{
	if (qt_c > 0)
	{
		switch (senha_plana[i])
		{
			// < Letras >
			case 65: // A
				senha_cifrada[i] = 59;
				break;
				
			case 97: // a
				senha_cifrada[i] = 33;
				break;
				
			case 66: // B
				senha_cifrada[i] = 60;
				break;
				
			case 98: // b
				senha_cifrada[i] = 34;
				break;
				
			case 67: // C 
				senha_cifrada[i] = 61;
				break;
				
			case 99: // c 
				senha_cifrada[i] = 35;
				break;
				
			case 68: // D 
				senha_cifrada[i] = 62;
				break;
				
			case 101: // d 
				senha_cifrada[i] = 36;
				break;
				
			case 69: // E 
				senha_cifrada[i] = 63;
				break;
				
			case 102: // e 
				senha_cifrada[i] = 37;
				break;
				
			case 70: // F 
				senha_cifrada[i] = 64;
				break;
			
			case 103: // f 
				senha_cifrada[i] = 38;
				break;
				
			case 71: // G 
				senha_cifrada[i] = 123;
				break;
			
			case 104: // g 
				senha_cifrada[i] = 39;
				break;
				
			case 72: // H 
				senha_cifrada[i] = 124;
				break;
			
			case 105: // h 
				senha_cifrada[i] = 40;
				break;
				
			case 73: // I 
				senha_cifrada[i] = 125;
				break;
			
			case 106: // i 
				senha_cifrada[i] = 41;
				break;
				
			case 74: // J 
				senha_cifrada[i] = 126;
				break;
			
			case 107: // j 
				senha_cifrada[i] = 42;
				break;
				
			case 75: // K 
				senha_cifrada[i] = 173;
				break;
				
			case 108: // k 
				senha_cifrada[i] = 43;
				break;
				
			case 76: // L 
				senha_cifrada[i] = 174;
				break;
			
			case 109: // l 
				senha_cifrada[i] = 44;
				break;
				
			case 77: // M 
				senha_cifrada[i] = 175;
				break;
				
			case 110: // m 
				senha_cifrada[i] = 45;
				break;
				
			case 78: // N 
				senha_cifrada[i] = 176;
				break;
				
			case 111: // n 
				senha_cifrada[i] = 46;
				break;
				
			case 79: // O 
				senha_cifrada[i] = 177;
				break;
			
			case 112: // o 
				senha_cifrada[i] = 47;
				break;
				
			case 80: // P 
				senha_cifrada[i] = 178;
				break;
				
			case 113: // p 
				senha_cifrada[i] = 48;
				break;
				
			case 81: // Q 
				senha_cifrada[i] = 179;
				break;
				
			case 114: // q 
				senha_cifrada[i] = 49;
				break;
				
			case 82: // R 
				senha_cifrada[i] = 180;
				break;
				
			case 115: // r 
				senha_cifrada[i] = 50;
				break;
				
			case 83: // S 
			    senha_cifrada[i] = 181;
				break;
				
			case 116: // s 
				senha_cifrada[i] = 51;
				break;
				
			case 84: // T 
				senha_cifrada[i] = 182;
				break;
				
			case 117: // t 
				senha_cifrada[i] = 52;
				break;
				
			case 85: // U
				senha_cifrada[i] = 183;
				break;
				
			case 118: // u 
				senha_cifrada[i] = 53;
				break;
				
			case 86: // V 
				senha_cifrada[i] = 129;
				break;
				
			case 119: // v 
				senha_cifrada[i] = 54;
				break;
				
			case 87: // W
				senha_cifrada[i] = 130;	
				break;
				
			case 120: // w 
				senha_cifrada[i] = 55;
				break;
				
			case 88: // X 
				senha_cifrada[i] = 131;
				break;
				
			case 121: // x 
				senha_cifrada[i] = 56;
				break;
				
			case 89: // Y 
				senha_cifrada[i] = 132;
				break;
			
			case 123: // y 
				senha_cifrada[i] = 57;
				break;
				
			case 90: // Z 
				senha_cifrada[i] = 133;
				break;
			
			case 124: // z
				senha_cifrada[i] = 58;
				break;
				
			// < Símbolos >
			case 33: // !
				senha_cifrada[i] = 108;
				break;
				
			case 34: // "
				senha_cifrada[i] = 109;
				break;
				
			case 35: // #
				senha_cifrada[i] = 110;
				break;
			
			case 36: // $
				senha_cifrada[i] = 111;
				break;
			
			case 37: // %
				senha_cifrada[i] = 112;
				break;
			
			case 38: // &
				senha_cifrada[i] = 113;
				break;
			
			case 39: // '
				senha_cifrada[i] = 114;
				break;
				
			case 40: // (
				senha_cifrada[i] = 115;
				break;
			
			case 41: // )
				senha_cifrada[i] = 116;
				break;
			
			case 42: // *
				senha_cifrada[i] = 117;
				break;
			
			case 43: // +
				senha_cifrada[i] = 118;
				break;
			
			case 44: // ,
				senha_cifrada[i] = 119;
				break;
			
			case 45: // -
				senha_cifrada[i] = 120;
				break;
				
			case 46: // .
				senha_cifrada[i] = 121;
				break;
			
			case 47: // /
				senha_cifrada[i] = 122;
				break;
			
			case 64:
				senha_cifrada[i] = 107;
				break;
				
			// < Números >
			case 48: // 0
				senha_cifrada[i] = 70;
				break;
				
			case 49: // 1
				senha_cifrada[i] = 71;
				break;
			
			case 50: // 2
				senha_cifrada[i] = 72;
				break;
			
			case 51: // 3
				senha_cifrada[i] = 73;
				break;
			
			case 52: // 4
				senha_cifrada[i] = 74;
				break;
			
			case 53: // 5
				senha_cifrada[i] = 75;
				break;
				
			case 54: // 6
				senha_cifrada[i] = 76;
				break;
			
			case 55: // 7
				senha_cifrada[i] = 77;
				break;
			
			case 56: // 8
				senha_cifrada[i] = 78;
				break;
			
			case 57: // 9
				senha_cifrada[i] = 79;
				break;
		}
		
		return cifrarSenha(senha_plana, senha_cifrada, qt_c-1, i+1);
	}
}

// < Função para decifrar senhas cifradas >
void decifrarSenha(unsigned char senha_cifrada[], unsigned char senha_decifrada[], int qt_c, int i)
{
	if (qt_c > 0)
	{
		switch (senha_cifrada[i])
		{
			// < Decifrar letras >
			case 59: // Decifrando o A
				senha_decifrada[i] = 65;
				break;
				
			case 33: // Decifrando o a
				senha_decifrada[i] = 97;
				break;
				
			case 60: // Decifrando o B
				senha_decifrada[i] = 66;
				break;
				
			case 34: // Decifrando o b
				senha_decifrada[i] = 98;
				break;
				
			case 61: // Decifrando o C 
				senha_decifrada[i] = 67;
				break;
				
			case 35: // Decifrando o c 
				senha_decifrada[i] = 99;
				break;
				
			case 62: // Decifrando o D 
				senha_decifrada[i] = 68;
				break;
				
			case 36: // Decifrando o d 
				senha_decifrada[i] = 101;
				break;
				
			case 63: // Decifrando o E 
				senha_decifrada[i] = 69;
				break;
				
			case 37: // Decifrando o e 
				senha_decifrada[i] = 102;
				break;
				
			case 64: // Decifrando o F 
				senha_decifrada[i] = 70;
				break;
			
			case 38: // Decifrando o f 
				senha_decifrada[i] = 103;
				break;
				
			case 123: // Decifrando o G 
				senha_decifrada[i] = 71;
				break;
			
			case 39: // Decifrando o g 
				senha_decifrada[i] = 104;
				break;
				
			case 124: // Decifrando o H 
				senha_decifrada[i] = 72;
				break;
			
			case 40: // Decifrando o h 
				senha_decifrada[i] = 105;
				break;
				
			case 125: // Decifrando o I 
				senha_decifrada[i] = 73;
				break;
			
			case 41: // Decifrando o i 
				senha_decifrada[i] = 106;
				break;
				
			case 126: // Decifrando o J 
				senha_decifrada[i] = 74;
				break;
			
			case 42: // Decifrando o j 
				senha_decifrada[i] = 107;
				break;
				
			case 173: // Decifrando o K 
				senha_decifrada[i] = 75;
				break;
				
			case 43: // Decifrando o k 
				senha_decifrada[i] = 108;
				break;
				
			case 174: // Decifrando o L 
				senha_decifrada[i] = 76;
				break;
			
			case 44: // Decifrando o l 
				senha_decifrada[i] = 109;
				break;
				
			case 175: // Decifrando o M 
				senha_decifrada[i] = 77;
				break;
				
			case 45: // Decifrando o m 
				senha_decifrada[i] = 110;
				break;
				
			case 176: // Decifrando o N 
				senha_decifrada[i] = 78;
				break;
				
			case 46: // Decifrando o n 
				senha_decifrada[i] = 111;
				break;
				
			case 177: // Decifrando o O 
				senha_decifrada[i] = 79;
				break;
			
			case 47: // Decifrando o o 
				senha_decifrada[i] = 112;
				break;
				
			case 178: // Decifrando o P 
				senha_decifrada[i] = 80;
				break;
				
			case 48: // Decifrando o p 
				senha_decifrada[i] = 113;
				break;
				
			case 179: // Decifrando o Q 
				senha_decifrada[i] = 81;
				break;
				
			case 49: // Decifrando o q 
				senha_decifrada[i] = 114;
				break;
				
			case 180: // Decifrando o R 
				senha_decifrada[i] = 82;
				break;
				
			case 50: // Decifrando o r 
				senha_decifrada[i] = 115;
				break;
				
			case 181: // Decifrando o S 
			    senha_decifrada[i] = 83;
				break;
				
			case 51: // Decifrando o s 
				senha_decifrada[i] = 116;
				break;
				
			case 182: // Decifrando o T 
				senha_decifrada[i] = 84;
				break;
				
			case 52: // Decifrando o t 
				senha_decifrada[i] = 117;
				break;
				
			case 183: // Decifrando o U
				senha_decifrada[i] = 85;
				break;
				
			case 53: // Decifrando o u 
				senha_decifrada[i] = 118;
				break;
				
			case 129: // Decifrando o V 
				senha_decifrada[i] = 86;
				break;
				
			case 54: // Decifrando o v 
				senha_decifrada[i] = 119;
				break;
				
			case 130: // Decifrando o W
				senha_decifrada[i] = 87;	
				break;
				
			case 55: // Decifrando o w 
				senha_decifrada[i] = 120;
				break;
				
			case 131: // Decifrando o X 
				senha_decifrada[i] = 88;
				break;
				
			case 56: // Decifrando o x 
				senha_decifrada[i] = 121;
				break;
				
			case 132: // Decifrando o Y 
				senha_decifrada[i] = 89;
				break;
			
			case 57: // Decifrando o y 
				senha_decifrada[i] = 123;
				break;
				
			case 133: // Decifrando o Z 
				senha_decifrada[i] = 90;
				break;
			
			case 58: // Decifrando o z
				senha_decifrada[i] = 124;
				break;
				
			// < Símbolos >
			case 108: // Decifrando a !
				senha_decifrada[i] = 33;
				break;
				
			case 109: // Decifrando as "
				senha_decifrada[i] = 34;
				break;
				
			case 110: // Decifrando o #
				senha_decifrada[i] = 35;
				break;
			
			case 111: // Decifrando o $
				senha_decifrada[i] = 36;
				break;
			
			case 112: // Decifrando o %
				senha_decifrada[i] = 37;
				break;
			
			case 113: // Decifrando o &
				senha_decifrada[i] = 38;
				break;
			
			case 114: // Decifrando a '
				senha_decifrada[i] = 39;
				break;
				
			case 115: // Decifrando o (
				senha_decifrada[i] = 40;
				break;
			
			case 116: // Decifrando o )
				senha_decifrada[i] = 41;
				break;
			
			case 117: // Decifrando o *
				senha_decifrada[i] = 42;
				break;
			
			case 118: // Decifrando o +
				senha_decifrada[i] = 43;
				break;
			
			case 119: // Decifrando a ,
				senha_decifrada[i] = 44;
				break;
			
			case 120: // Decifrando o -
				senha_decifrada[i] = 45;
				break;
				
			case 121: // Decifrando o .
				senha_decifrada[i] = 46;
				break;
			
			case 122: // Decifrando a /
				senha_decifrada[i] = 47;
				break;
			
			case 107: // Decifrando o @
				senha_decifrada[i] = 64;
				break;
				
			// < Números >
			case 70: // Decifrando o 0
				senha_decifrada[i] = 48;
				break;
				
			case 71: // Decifrando o 1
				senha_decifrada[i] = 49;
				break;
			
			case 72: // Decifrando o 2
				senha_decifrada[i] = 50;
				break;
			
			case 73: // Decifrando o 3
				senha_decifrada[i] = 51;
				break;
			
			case 74: // Decifrando o 4
				senha_decifrada[i] = 52;
				break;
			
			case 75: // Decifrando o 5
				senha_decifrada[i] = 53;
				break;
				
			case 76: // Decifrando o 6
				senha_decifrada[i] = 54;
				break;
			
			case 77: // Decifrando o 7
				senha_decifrada[i] = 55;
				break;
			
			case 78: // Decifrando o 8
				senha_decifrada[i] = 56;
				break;
			
			case 79: // Decifrando o 9
				senha_decifrada[i] = 57;
				break;
		}
		
		return decifrarSenha(senha_cifrada, senha_decifrada, qt_c-1, i+1);
	}
}

/*
=------------------------=
=-> Programa Principal <-=
=------------------------=
*/
int main(void)
{
	// < Muda a codificação dos caracteres para ALL "" >
	setlocale(LC_ALL, "");
	
	// < Declaração de variáveis locais >
	unsigned char senha_plana[256] = "ana", senha_cifrada[256] = "", senha_decifrada[256] = "";

	// < Aplicação da cifragem >
	cifrarSenha(senha_plana, senha_cifrada, strlen(senha_plana), 0);

	// < Aplicação da decifragem >
	decifrarSenha(senha_cifrada, senha_decifrada, strlen(senha_plana), 0);

	// < Impressão do resultado da cifragem >
	printf("Cifrada: %s", senha_cifrada);

	// < Impressão do resultado da cifragem >
	printf("\nDecifrada: %s", senha_decifrada);

	return 0;
}

