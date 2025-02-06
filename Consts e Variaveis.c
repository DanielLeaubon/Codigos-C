#include <stdio.h>
#define texto "Entrada e saida de dados. "



int main(){

	printf ("%s\n",texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";

	printf("Digite a idade:\n");
		scanf("%d", &idade);
	
	printf("Digite a altura:\n");
		scanf("%f", &altura);
		
	printf("Digite o nome:\n");
		scanf(" %[^\n]", nome);
	
	//scanf(" %[^\n]", nome); Utilizado para pegar nomes compostos, serve para ignorar qualquer caractere de nova linha (\n) que tenha ficado no buffer.
	
	printf("Dados informados: \n");
	printf("Idade: %d.\n", idade);
	printf("Altura: %.2f.\n",altura);
	printf("Nome: %s.\n", nome);
	
	return 0;

}
