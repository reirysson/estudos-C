#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Nome: Reirysson Thiago da Costa - 2018011309

int main (){
	setlocale (LC_ALL,"portuguese");
	int opcaosistema, senha, quantidadeestudantes,contestudantes=0,votosbrancosr=0,votosnulosr=0,votosbrancosp=0,votosnulosp=0,cont_r1=0,cont_r2=0,cont_r3=0,cont_r4=0,cont_r5=0,cont_p1=0,cont_p2=0;
	char representante1[41],representante2[41],representante3[41],representante4[41],representante5[41], presidente1[41],presidente2[41], r1[6],r2[6],r3[6],r4[6],r5[6],p1[3],p2[3],votorepresentante[7],votopresidente[7]; //Usei um valor maior de string para poder aceitar o nome "BRANCO"//
	
		do {
		printf ("Seja bem vindo (a) ao sistema de urna de vota��o da UFERSA-PDF \nDigite a senha para acesso ao sistema: ");
		scanf ("%d",&senha);
		if (senha!=159263){
			printf ("\nOps... Senha incorreta, tente novamente\n");
			printf("\nAperte enter para continuar...");
			scanf("%*c%*c");
		}
		system("cls");
	}while (senha!=159263);
	printf ("Senha correta\n");
			printf("\nAperte enter para continuar...");
			scanf("%*c%*c");
		while (1){
		system("cls");
		printf ("\n1 - Iniciar vota��o \n2 - Definir quantidade de votantes \n3 - Contabilizar votos \n4 - Cadastrar candidatos \n5 - Sair \nDigite a op��o desejada: ");
		scanf ("%d",&opcaosistema);
	if (opcaosistema==1){
		if (quantidadeestudantes>=30){
			for (contestudantes=0;contestudantes<quantidadeestudantes;contestudantes++){
		system("cls");
		printf (" -----------------------------   -----------------------------\n|                              |                              |\n|                              |      JUSTI�A ESTUDANTIL      |\n|         SEU VOTO             |                              |\n|     PARA REPRESENTANTE       |            1 2 3             |\n|         _ _ _ _ _            |            4 5 6             |\n|                              |            7 8 9             |\n|                              |              0               |\n|                              |   BRANCO  CORRIGE  CONFIRMA  |\n -----------------------------   ----------------------------- \nVoto: ");
		scanf ("%s",votorepresentante);
			if (strcmp(votorepresentante,r1)==0){
				printf ("\nVoc� votou em %s para representante estudantil",representante1);
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				cont_r1++;
			}else if (strcmp(votorepresentante,r2)==0){
				printf ("\nVoc� votou em %s para representante estudantil",representante2);
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				cont_r2++;
			}else if (strcmp(votorepresentante,r3)==0){
				printf ("\nVoc� votou em %s para representante estudantil",representante3);
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				cont_r3++;
			}else if (strcmp(votorepresentante,r4)==0){
				printf ("\nVoc� votou em %s para representante estudantil",representante4);
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				cont_r4++;
			}else if (strcmp(votorepresentante,r5)==0){
				printf ("\nVoc� votou em %s para representante estudantil",representante5);
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				cont_r5++;
			}else if (strcmp(votorepresentante,"BRANCO")==0){
				printf ("\nVoc� votou em branco!");
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				votosbrancosr++;
			}else{
				printf ("\nVoc� votou nulo!");
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				votosnulosr++;
			}
		system("cls");
		printf (" \n-----------------------------   -----------------------------\n|                              |                              |\n|                              |      JUSTI�A ESTUDANTIL      |\n|         SEU VOTO             |                              |\n|      PARA PRESIDENTE         |            1 2 3             |\n|           _ _                |            4 5 6             |\n|                              |            7 8 9             |\n|                              |              0               |\n|                              |   BRANCO  CORRIGE  CONFIRMA  |\n -----------------------------   ----------------------------- \nVoto: ");
		scanf ("%s",votopresidente);
			if (strcmp(votopresidente,p1)==0){
				printf ("\nVoc� votou em %s para presidente do gr�mio",presidente1);
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				cont_p1++;
			}else if (strcmp(votopresidente,p2)==0){
				printf ("\nVoc� votou em %s para presidente do gr�mio",presidente2);
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				cont_p2++;
			}else if (strcmp(votopresidente,"BRANCO")==0){
				printf ("\nVoc� votou em branco!");
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				votosbrancosp++;
			}else{
				printf ("\nVoc� votou nulo!");
				printf("\nAperte enter para continuar...");
				scanf("%*c%*c");
				votosnulosp++;
			}
		do {
		printf ("\nAgradecemos pelo seu voto!\nAdministrador, por favor insira a senha e chame o pr�ximo aluno votante \nDigite a senha: ");
		scanf ("%d",&senha);
		if (senha!=159263){
			printf ("\nOps... Senha incorreta, tente novamente\n");
			printf("\nAperte enter para continuar...");
			scanf("%*c%*c");
		}
		system("cls");
	}while (senha!=159263);
	printf ("Senha correta\n");
			printf("\nAperte enter para continuar...");
			scanf("%*c%*c");
		system("cls");		
		}
		}else if (quantidadeestudantes<30){
			printf ("\nInfelizmente a quantidade de estudantes para votarem n�o foi adequada para iniciar a vota��o, aguarde ter a quantidade correta para iniciar a mesma");
			printf("\nAperte enter para continuar...");
			scanf("%*c%*c");
		}
	}else if (opcaosistema==2){
		do{
		printf ("\nDigite a quantidade de estudantes que est�o aptos a votar: ");
		scanf ("%d",&quantidadeestudantes);
		if (quantidadeestudantes<30){
		printf ("\nA quantidade de estudantes aptos a votarem n�o condiz com m�nimo exigido para a vota��o, aguarde at� ter 30 ou mais para realizar a vota��o");
		printf("\nAperte enter para continuar...");
		scanf("%*c%*c");
		}
		system("cls");	
		}while (quantidadeestudantes<30);
		printf ("\nA vota��o ter� %d estudantes votantes, avisem aos mesmos que iremos come�ar em instantes a vota��o", quantidadeestudantes);
		printf("\nAperte enter para continuar...");
		scanf("%*c%*c");
	}else if (opcaosistema==3){
		printf ("\nRELAT�RIO DE VOTOS \nTotal de votos: %d \n      VOTOS PARA REPRESENTANTE ESTUDANTIL     \nCandidato %s: %d\nCandidato %s: %d\nCandidato %s: %d\nCandidato %s: %d\nCandidato %s: %d\nVotos BRANCOS: %d \nVotos NULOS: %d \n----------------------------------------------- \n      VOTOS PARA PRESIDENTE DO GR�MIO     \nCandidato %s: %d\nCandidato %s: %d\nVotos BRANCOS: %d \nVotos NULOS: %d",quantidadeestudantes, representante1,cont_r1,representante2,cont_r2,representante3,cont_r3,representante4,cont_r4,representante5,cont_r5,votosbrancosr,votosnulosr,presidente1,cont_p1,presidente2,cont_p2,votosbrancosp,votosnulosp);
		printf("\nAperte enter para continuar...");
		scanf("%*c%*c");
	}else if (opcaosistema==4){
		fflush(stdin);
		printf ("\n         CADASTRO DE REPRESENTANTES ESTUDANTIS          \nRepresentante estudantil 1\nNome: ");
		scanf ("%[^\n]s",representante1);
		printf ("\nN�mero: ");
		scanf ("%s",r1);
		fflush(stdin);
		printf ("\nRepresentante estudantil 2 \nNome: ");
		scanf ("%[^\n]s",representante2);
		printf ("\nN�mero: ");
		scanf ("%s",r2);
		fflush(stdin);
		printf ("\nRepresentante estudantil 3 \nNome: ");
		scanf ("%[^\n]s",representante3);
		printf ("\nN�mero: ");
		scanf ("%s",r3);
		fflush(stdin);
		printf ("\nRepresentante estudantil 4 \nNome: ");
		scanf ("%[^\n]s",representante4);
		printf ("\nN�mero: ");
		scanf ("%s",r4);
		fflush(stdin);
		printf ("\nRepresentante estudantil 5 \nNome: ");
		scanf ("%[^\n]s",representante5);
		printf ("\nN�mero: ");
		scanf ("%s",r5);
		system("cls");
		fflush(stdin);
		printf ("\n         CADASTRO DE PRESIDENTES DO GR�MIO          \nPresidente do gr�mio 1\nNome: ");
		scanf ("%[^\n]s",presidente1);
		printf ("\nN�mero: ");
		scanf ("%s",p1);
		fflush(stdin);
		printf ("\nPresidente do gr�mio 2 \nNome: ");
		scanf ("%[^\n]s",presidente2);
		printf ("\nN�mero: ");
		scanf ("%s",p2);
	}else if (opcaosistema==5){
	printf ("\nAgradecemos por usar do nosso sistema, volte sempre!\n");
		break;
	}else if (opcaosistema>5){
	printf ("\nOp��o incorreta, digite novamente uma op��o adequada\n");
	}
	}
	system ("pause");
	return (0);
}
