#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "");
	
	int opt;
	
	do
	{
	
	printf ("\n\n\n***BEM VINDO � JUJUBA DOCES***\n\n\n");
	printf ("ESCOLHA UMA DE NOSSAS DELICIOSAS SOBREMESSAS\n");
	printf ("\tTORTA NAPOLITANA (1)\n");
	printf ("\tPALHA ITALIANA (2)\n");
	printf ("\tCREPE SUZETTE (3)\n");
	printf ("\tMIL FOLHAS (4)\n");
	printf ("\tFECHAR CARD�PIO (5)\n");
	scanf ("%d", &opt);
	
	switch (opt)
	{
		case 1:
			printf ("\nVoc� escolheu a deliciosa Torta Napolitana!\n Ela � composta por uma massa crocante, uma camada de mousse de coco, morango e chocolate.\n");
			break;
		
		case 4:
			printf ("\nVoc� escolheu a sobremesa Mil Folhas!\n Massa folhada recheada com creme patissiere, morango e chantily.\n");	
			break;
			
		case 2:
			printf ("\nVoc� escolheu a Palha Italiana!\nComposta por um delicioso biscoito triturado e brigadeiro.");
			break;
		
		case 3:
			printf("\nVoc� escolheu o refinado Crepe Suzette!\nCrepe com calda de laranja e conhaque flambado servido com sorvete de creme.");
			break;
			
		case 5:
			printf ("\nObrigado Pela Prefer�ncia!");
			break;
		
		default:
			printf ("\nOp��o Inv�lida!");
	}
	
	}while (opt !=5);
	return 0;
}

