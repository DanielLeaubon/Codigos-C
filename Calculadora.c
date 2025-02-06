#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1 = 0;
	float num2 = 0;
	char operation;
	printf("Calculator \n\n");
	
	printf("Type the first number: \n");
	scanf("%f", &num1);
	
	printf("Type the second number: \n");
	scanf("%f", &num2);
	
	printf("Type the Numerical operation: \n");
	scanf(" %c", &operation);
	
	system("cls || clear");
	
	if(operation == '+')
		printf("Your result is: %f ", num1 + num2);
		
	else if(operation == '-')
		printf("Your result is: %f ", num1 - num2);

	else if(operation == '/' ){
		if( num1 || num2 == 0){
			printf("You can't use 0 on division");
		}
		else
			printf("Your result is: %f ", num1 / num2);
	}
	else if(operation == '*')
		printf("Your result is: %f ", num1 * num2);
		
	else
        printf("Invalid operation!\n"); 
}
