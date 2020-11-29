#include<stdio.h>
int main()
{
	float altura, peso, imc;
	printf("peso:\n");
	scanf_s("%f", &peso);
	printf("altura:\n");
	scanf_s("%f", &altura);
	imc = peso / (altura * altura);
	if (imc < 18.5)
	{
		printf("peso baixo\n");
	}
	else if (imc >= 18.5 && imc < 24.9)
	{
		printf("imc:%.1f, peso normal\n", imc);
	}
	else if (imc >= 24.9 && imc < 29.9)
	{
		printf("imc:%.1f, pre-obesidade\n", imc);
	}
	else
	{
		printf("%.1f, obesidade\n", imc);
	}
	return 0;
}