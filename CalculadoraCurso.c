#include <stdio.h>
#include <math.h>

int main(){
	int A, B, soma, subtr, mult, divis, resto, elevado;
	
	printf("Digite o primeiro valor:\n");
    	scanf("%d",&A);
	printf("Digite o segundo valor: \n");
		scanf("%d",&B);
		
	soma = A + B;
	subtr = A - B;	
	mult = A * B;
	divis = A / B;
	resto = A % B;
	elevado = pow(A, B);
	 
	
	
	printf("Resultados : \n");
	printf("Soma: %d\n", soma);
	printf("Subtrai: %d\n", subtr);
	printf("Multiplica: %d\n", mult);
	printf("Dividir: %d\n", divis);
	printf("Resto: %d\n", resto);
	printf("Elevado: %d\n", elevado);

}
