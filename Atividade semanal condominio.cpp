#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao,quantidade,opcaohorario,horario[10],vc;
	char familia[15];
	
	for(vc=0;vc<10;vc++){
		horario[vc]=0;
	}
	
	while (1){
		system("cls");
		printf ("\nDigite alguma das op��es: \n 1 - Agendar hor�rio \n 2 - Sair \n Digite a op��o: ");
		scanf ("%d",&opcao);
		if(opcao==1){
			printf ("\nDigite o nome da sua fam�lia: ");
			scanf ("%s",&familia);
			printf ("\nQuantas pessoas da fam�lia iram utilizar os equipamentos: ");
			scanf ("%d",&quantidade);
			if(quantidade<=3){
				printf ("\nTemos os seguintes hor�rios dispon�veis: \n 1 - 7hs �s 8hs \n 2 - 8hs �s 9hs \n 3 - 9hs �s 10hs \n 4 - 10hs �s 11hs \n 5 - 14hs �s 15hs \n 6 - 15hs �s 16hs \n 7 - 16hs �s 17hs \n 8 - 18hs �s 19hs \n 9 - 19hs �s 20hs \n 10 - 20hs �s 21hs \n Digite a op��o: ");
				scanf ("%d",&opcaohorario);
				if(horario[opcaohorario-1]==0){
					horario[opcaohorario-1]=1;
					printf ("\nHor�rio cadastrado com sucesso!");
				}else{
					printf ("\nO hor�rio j� est� ocupado");
				}
			}else{
				printf ("\nN�o podemos atender no momento, pois devido a pandemia s� podemos atender\nat� 3 pessoas da mesma fam�lia em nossa academia");
			}
		}else if(opcao==2){
			printf ("\nAgradecemos por utilizar nossos servi�os, tenha um excelente dia!");
			break;
		}else{
			printf ("\nOp��o inv�lida");
		}
		
		printf("\nAperte qualquer tecla para continuar...");
		scanf("%*c%*c");
	}
}
