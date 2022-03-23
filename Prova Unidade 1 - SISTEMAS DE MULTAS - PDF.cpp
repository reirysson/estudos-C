#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Nome: Reirysson Thiago da Costa - 2018011309
int main (){
	setlocale(LC_ALL,"Portuguese");
	int opcao, carteira, opcaomulta, senha, cont_multa1=0, cont_multa2=0, cont_multa3=0, cont_multa4=0, cont_multas=0, menusair;
	float multa1, multa2, multa3, multa4;
	char placa[10], modelo[10], motorista [10];
	
	printf ("Seja bem vindo(a) ao SIMULT-PDF \nDigite a senha para poder ter acesso ao sistema: ");
	scanf("%d",&senha);
	if(senha==123){
		printf ("\nSenha correta, seja bem vindo(a) ao sistema de multas SIMULT-PDF\n");
	while (1){
	system("cls");
	printf ("\n1 - Inserir multa \n2 - Gerar relatório de arrecadação de fundos \n3 - Sair \n\nDigite a opção deseja: ");
	scanf ("%d",&opcao);
	if (opcao==1){
		cont_multas+=1;
		printf ("\nA seguir você irá digitar as informações para inserir a multa");
		printf ("\nDigite a placa do veículo: ");
		scanf ("%s",&placa);
		printf ("\nDigite o modelo do veículo: ");
		scanf ("%s",&modelo);
		printf ("\nDigite o número da carteira do motorista: ");
		scanf ("%d",&carteira);
		printf ("\nDigite o nome do motorista: ");
		scanf ("%s",&motorista);
		printf ("\nTIPO DE MULTA \n1 - Leve \n2 - Média \n3 - Grave \n4 - Gravíssima \nDigite o tipo de multa: ");
		scanf ("%d",&opcaomulta);
			if (opcaomulta==1){
				cont_multa1+=1;
				printf ("\nO motorista foi multado com uma multa leve, que irá pagar o valor de R$88,38 e terá 3 pontos em sua carteira\n");
				printf ("\nTecle 1 para retornar ao menu: ");
				scanf ("%d",&menusair);
			}else if(opcaomulta==2){
				cont_multa2+=1;
				printf ("\nO motorista foi multado com uma multa média, que irá pagar o valor de R$130,16 e terá 4 pontos em sua carteira\n");
				printf ("\nTecle 1 para retornar ao menu: ");
				scanf ("%d",&menusair);
			}else if(opcaomulta==3){
				cont_multa3+=1;
				printf ("\nO motorista foi multado com uma multa grave, que irá pagar o valor de R$195,23 e terá 5 pontos em sua carteira\n");
				printf ("\nTecle 1 para retornar ao menu: ");
				scanf ("%d",&menusair);
			}else if(opcaomulta==4){
				cont_multa4+=1;
				printf ("\nO motorista foi multado com uma multa gravíssima, que irá pagar o valor de R$293,47 e terá 7 pontos em sua carteira\n");
				printf ("\nTecle 1 para retornar ao menu: ");
				scanf ("%d",&menusair);
			}else if(opcaomulta>=5){
				printf ("\nO tipo de multa não existe, por favor digite um tipo conhecido\n");
			}
	}else if(opcao==2){
		printf ("\nRelatório de arrecadação de fundos\n");
		printf ("\n1 - Quantidade de multas aplicadas: %d\n", cont_multas);
		printf ("\n2 - Quantidade de cada tipo de multa aplicada: \nLeve: %d \nMédia: %d\nGrave: %d\nGravíssima: %d\n",cont_multa1, cont_multa2, cont_multa3, cont_multa4);
		printf ("\n3 - Valor arrecadado por cada tipo de multa: \nLeve: %.2f\nMédia: %.2f\nGrave: %.2f\nGravíssima: %.2f\n",multa1=88.38*cont_multa1, multa2=130.16*cont_multa2, multa3=195.23*cont_multa3, multa4=293.47*cont_multa4);
		printf ("\n4 - Total de fundos arrecadados: %.2f\n ",multa1+multa2+multa3+multa4);
		printf ("\nTecle 1 para retornar ao menu: ");
		scanf ("%d",&menusair);
	}else if(opcao==3){
		printf ("\nAgradecemos por utilizar o nosso sitema");
		break;
	}else if(opcao>=4){
		printf ("\nOpção inválida, digite novamente uma opção válida\n\n");
		printf ("\nTecle 1 para retornar ao menu: ");
		scanf ("%d",&menusair);
	}	
	}		
	}else{
		printf ("\nOps... Senha inválida, entre em contato com o administrador e use a senha correta");
	}
	
}
