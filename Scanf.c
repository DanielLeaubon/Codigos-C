#include <stdio.h>

int main(){
	 
	 int idade = 0;
	 int ano = 1980;
	 
	 printf("Valor inicial da idade e do ano: %d %d. \n", idade, ano);
	 
	 /*printf("Digite uma idade e um ano: \n");
	 scanf("%d %d", &idade, &ano);
	 É melhor utilizar scanfs separados*/
	 
	 printf("Digite uma idade: \n");
	 scanf("%d", &idade );
	 
	 printf("Digite um ano: \n");
	 scanf("%d", &ano);
	 
	 printf("Sua idade e ano: %d e %d \n", idade, ano);
	
}
