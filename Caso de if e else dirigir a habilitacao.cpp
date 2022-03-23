#include <stdio.h>
int main (){
	int idade, opcao;
	printf ("Digite a sua idade:");
	scanf ("%d",&idade);
	
	if(idade>=18){
		printf ("Informe se voce tirou a habilitacao: Digite 1 para SIM e 2 para NAO");
		scanf ("%d",&opcao);
		if(opcao==1){
			printf ("Voce pode dirigir");
		}else{
			printf ("Voce nao pode dirigir pois nao possui habilitacao");
		}
	}
	if (idade<18){
		printf ("Voce nao pode dirigir porque nao tem maior idade");
	}
}
