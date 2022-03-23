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
		printf ("\nDigite alguma das opções: \n 1 - Agendar horário \n 2 - Sair \n Digite a opção: ");
		scanf ("%d",&opcao);
		if(opcao==1){
			printf ("\nDigite o nome da sua família: ");
			scanf ("%s",&familia);
			printf ("\nQuantas pessoas da família iram utilizar os equipamentos: ");
			scanf ("%d",&quantidade);
			if(quantidade<=3){
				printf ("\nTemos os seguintes horários disponíveis: \n 1 - 7hs ás 8hs \n 2 - 8hs ás 9hs \n 3 - 9hs ás 10hs \n 4 - 10hs ás 11hs \n 5 - 14hs ás 15hs \n 6 - 15hs ás 16hs \n 7 - 16hs ás 17hs \n 8 - 18hs ás 19hs \n 9 - 19hs ás 20hs \n 10 - 20hs ás 21hs \n Digite a opção: ");
				scanf ("%d",&opcaohorario);
				if(horario[opcaohorario-1]==0){
					horario[opcaohorario-1]=1;
					printf ("\nHorário cadastrado com sucesso!");
				}else{
					printf ("\nO horário já está ocupado");
				}
			}else{
				printf ("\nNão podemos atender no momento, pois devido a pandemia só podemos atender\naté 3 pessoas da mesma família em nossa academia");
			}
		}else if(opcao==2){
			printf ("\nAgradecemos por utilizar nossos serviços, tenha um excelente dia!");
			break;
		}else{
			printf ("\nOpção inválida");
		}
		
		printf("\nAperte qualquer tecla para continuar...");
		scanf("%*c%*c");
	}
}
