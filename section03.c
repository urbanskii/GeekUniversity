#include <stdio.h>

int main(){
	//Declaration of variables;
	int minimum_quantity, max_quantity;
	float average_stock;

	//inputs
	printf("Inform the minimal quantity: ");
	scanf("%d", &minimum_quantity);

	printf("Inform the maximal_quantity: ");
	scanf("%d", &max_quantity);

	//calc
	average_stock = (minimum_quantity + max_quantity)/2;

	//output
	printf("The average stock is: %f", average_stock);



}
