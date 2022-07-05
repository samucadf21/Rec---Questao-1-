#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//#include <conio.h>
#include <string.h>

/* Elabore um algoritmo que leia o código do candidato ( 1, 2, 3, 4), 
nulos = 5, branco = 6 em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0. */

int main(void) {

int cand1=0, cand2=0, cand3=0, cand4=0,  vNulo = 0, vBranco = 0, opcao = 7;

	setlocale (LC_ALL, "Portuguese");
  
	while(opcao!=0) {
		
		printf("\n\n---''Eleiçoes para lider da liga da justica''---");
		printf("\n------------------------------------------------");
		printf("\n 1 - Super man\n 2 - Flash\n 3 - Batman\n 4 - Mulher maravilha\n 5 - Voto Nulo\n 6 - Voto em Branco;");
		printf("\n\nEntre com a opção desejada e tecle 'ENTER': ");
		scanf("%I", &opcao);
		
		switch(opcao)
		{
			case 0:
				printf("\nVotação encerrada \n");
				break;
			case 1:
				cand1=cand1+1;
				printf("\n1 - Super Man - Voto confirmado com sucesso ! \n\n");	
				break;
			case 2:
				cand2=cand2+1;
				printf("\n2 - Flash - Voto confirmado com sucesso ! \n\n");
				break;
			case 3:
				cand3=cand3+1;
				printf("\n3 - Batman - Voto confirmado com sucesso ! \n\n");
				break;
			case 4:
				cand4=cand4+1;
				printf("\n4 - Mulher Maravilha - Voto confirmado com sucesso ! \n\n");
				break;
			case 5:
				vNulo=vNulo+1;
				printf("\n5 - Voto Nulo confirmado com sucesso ! \n\n");
				break;
			case 6:
				vBranco=vBranco+1;
				printf("\n6 - Voto em Branco confirmado com sucesso ! \n\n");
				break;
      default:
				printf("\nOpção inválida ! \n\n");	
				break;
		}
  }
	printf("\nResultatos: \n Super Man\t\t %i\n Flash\t\t\t %i\n Batman\t\t\t %i\n Mulher Maravilha\t %i\n Voto Nulo\t\t %i\n Voto em Branco\t\t %i\n ", cand1, cand2, cand3, cand4, vNulo, vBranco);                   
	
	getchar();	
	printf("\n\n");	
	system("pause");
	return(0);
}