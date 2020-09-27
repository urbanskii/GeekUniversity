/* Author: Marcos Antonio Urbanski 27/09/2020
 * This is a exercise from Udemy course "algoritmos-e-logica-de-programacao-essencial" by GeekUniversity.
 * This program was made to adding variables and multiply,
 * The variables below, receive the data of the user,
 * num1, num2 receive the integer numbers.
 * variable multiplication receive the result of multiplication of variable sum and num1
 * The result of multiplication is display in the output with the function printf.
 *
 */
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
