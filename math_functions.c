#include <stdio.h>

int adding(int a ,int b)
{
	int sum;
	sum = a + b;
}

int sub(int a, int b)
{
	int vaule;
	vaule = b - a;
}

int mul(int a, int b)
{
	int value;
	value =  a * b;
}

int main ()
{
	int number1, number2;
	
	printf("Input two numbers to add: ");
	scanf("%i %i", &number1, &number2);
	printf("The sum of your numbers is: %i\n", adding(number1, number2));

	printf("Input two numbers to subtract: ");
	scanf("%i %i", &number1, &number2);
	printf("The sum of your numbers is: %i\n", sub(number1, number2));
	
	printf("Input two numbers to multiply: ");
	scanf("%i %i", &number1, &number2);
	printf("The sum of your numbers is: %i\n", mul(number1, number2));
	
	
	return 0;
}
