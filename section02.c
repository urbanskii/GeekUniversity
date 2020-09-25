#include <stdio.h>
// std = Standard
// io = input/output

int main(){
	//Variables declaration
	int num1, num2, sum, multiplication;

	//inputs
	printf("Type the first number: ");
	scanf("%d", &num1);

	printf("Type the second number: ");
	scanf("%d", &num2);

	//calc
	sum = num1 + num2;
	multiplication = sum * num1;

	//output
	printf("The output of multiplication is %d", multiplication);
}
