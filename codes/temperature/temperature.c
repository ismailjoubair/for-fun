#include <stdio.h>

int main(){
	int temp;
	float f;
	printf("la valeur actuelle en c°: \n");
	scanf("%d",&temp);
	f= temp*(9/5)+32;
	printf("la temperature en Fahrenheit: %2f \n",f);
	return 0;
}
