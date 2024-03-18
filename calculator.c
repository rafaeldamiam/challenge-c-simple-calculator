#include <stdio.h>
#include <stdlib.h>

float* ask_number(){
	float* number = (float*) malloc(sizeof(float));
	printf("Enter a number: ");
	scanf("%f", number);

	return number;
}

char* ask_operator(){
	char* operation = (char*) malloc(sizeof(char));
	printf("Enter the operator (+,-,x,/): ");
	scanf(" %c", operation);

	return operation;
}

int main(){
	float* number_one = ask_number();
	char* operator = ask_operator();
	float* number_two = ask_number();
	float* result = (float*) malloc(sizeof(float));

	if(*operator == '+'){
		*result = *number_one + *number_two;
	}else if(*operator == '-'){
		*result = *number_one - *number_two;
	}else if(*operator == 'x'){
		*result = *number_one * *number_two;
	}else if(*operator == '/'){
		*result = *number_one / *number_two;
	}else{
		printf("Enter a valid operator  \n");
		exit(0);
	}


	printf("\n\nThe operation is: %.2f %c %.2f = %.2f \n", *number_one, *operator, *number_two, *result);

	free(number_one);
	free(operator);
	free(number_two);

	return 0;
}