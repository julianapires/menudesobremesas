#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "");
	
	int opt;
	
	do
	{
	
	printf ("\n\n\n***BEM VINDO À JUJUBA DOCES***\n\n\n");
	printf ("ESCOLHA UMA DE NOSSAS DELICIOSAS SOBREMESSAS\n");
	printf ("\tTORTA NAPOLITANA (1)\n");
	printf ("\tPALHA ITALIANA (2)\n");
	printf ("\tCREPE SUZETTE (3)\n");
	printf ("\tMIL FOLHAS (4)\n");
	printf ("\tFECHAR CARDÁPIO (5)\n");
	scanf ("%d", &opt);
	
	switch (opt)
	{
		case 1:
			printf ("\nVocê escolheu a deliciosa Torta Napolitana!\n Ela é composta por uma massa crocante, uma camada de mousse de coco, morango e chocolate.\n");
			break;
		
		case 4:
			printf ("\nVocê escolheu a sobremesa Mil Folhas!\n Massa folhada recheada com creme patissiere, morango e chantily.\n");	
			break;
			
		case 2:
			printf ("\nVocê escolheu a Palha Italiana!\nComposta por um delicioso biscoito triturado e brigadeiro.");
			break;
		
		case 3:
			printf("\nVocê escolheu o refinado Crepe Suzette!\nCrepe com calda de laranja e conhaque flambado servido com sorvete de creme.");
			break;
			
		case 5:
			printf ("\nObrigado Pela Preferência!");
			break;
		
		default:
			printf ("\nOpção Inválida!");
	}
	
	}while (opt !=5);
	return 0;
}

