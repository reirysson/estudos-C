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
	printf ("\n1 - Inserir multa \n2 - Gerar relat�rio de arrecada��o de fundos \n3 - Sair \n\nDigite a op��o deseja: ");
	scanf ("%d",&opcao);
	if (opcao==1){
		cont_multas+=1;
		printf ("\nA seguir voc� ir� digitar as informa��es para inserir a multa");
		printf ("\nDigite a placa do ve�culo: ");
		scanf ("%s",&placa);
		printf ("\nDigite o modelo do ve�culo: ");
		scanf ("%s",&modelo);
		printf ("\nDigite o n�mero da carteira do motorista: ");
		scanf ("%d",&carteira);
		printf ("\nDigite o nome do motorista: ");
		scanf ("%s",&motorista);
		printf ("\nTIPO DE MULTA \n1 - Leve \n2 - M�dia \n3 - Grave \n4 - Grav�ssima \nDigite o tipo de multa: ");
		scanf ("%d",&opcaomulta);
			if (opcaomulta==1){
				cont_multa1+=1;
				printf ("\nO motorista foi multado com uma multa leve, que ir� pagar o valor de R$88,38 e ter� 3 pontos em sua carteira\n");
				printf ("\nTecle 1 para retornar ao menu: ");
				scanf ("%d",&menusair);
			}else if(opcaomulta==2){
				cont_multa2+=1;
				printf ("\nO motorista foi multado com uma multa m�dia, que ir� pagar o valor de R$130,16 e ter� 4 pontos em sua carteira\n");
				printf ("\nTecle 1 para retornar ao menu: ");
				scanf ("%d",&menusair);
			}else if(opcaomulta==3){
				cont_multa3+=1;
				printf ("\nO motorista foi multado com uma multa grave, que ir� pagar o valor de R$195,23 e ter� 5 pontos em sua carteira\n");
				printf ("\nTecle 1 para retornar ao menu: ");
				scanf ("%d",&menusair);
			}else if(opcaomulta==4){
				cont_multa4+=1;
				printf ("\nO motorista foi multado com uma multa grav�ssima, que ir� pagar o valor de R$293,47 e ter� 7 pontos em sua carteira\n");
				printf ("\nTecle 1 para retornar ao menu: ");
				scanf ("%d",&menusair);
			}else if(opcaomulta>=5){
				printf ("\nO tipo de multa n�o existe, por favor digite um tipo conhecido\n");
			}
	}else if(opcao==2){
		printf ("\nRelat�rio de arrecada��o de fundos\n");
		printf ("\n1 - Quantidade de multas aplicadas: %d\n", cont_multas);
		printf ("\n2 - Quantidade de cada tipo de multa aplicada: \nLeve: %d \nM�dia: %d\nGrave: %d\nGrav�ssima: %d\n",cont_multa1, cont_multa2, cont_multa3, cont_multa4);
		printf ("\n3 - Valor arrecadado por cada tipo de multa: \nLeve: %.2f\nM�dia: %.2f\nGrave: %.2f\nGrav�ssima: %.2f\n",multa1=88.38*cont_multa1, multa2=130.16*cont_multa2, multa3=195.23*cont_multa3, multa4=293.47*cont_multa4);
		printf ("\n4 - Total de fundos arrecadados: %.2f\n ",multa1+multa2+multa3+multa4);
		printf ("\nTecle 1 para retornar ao menu: ");
		scanf ("%d",&menusair);
	}else if(opcao==3){
		printf ("\nAgradecemos por utilizar o nosso sitema");
		break;
	}else if(opcao>=4){
		printf ("\nOp��o inv�lida, digite novamente uma op��o v�lida\n\n");
		printf ("\nTecle 1 para retornar ao menu: ");
		scanf ("%d",&menusair);
	}	
	}		
	}else{
		printf ("\nOps... Senha inv�lida, entre em contato com o administrador e use a senha correta");
	}
	
}
