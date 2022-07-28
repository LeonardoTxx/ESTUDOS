//Aula 1 Moreno

#include <stdio.h>
#include <stdlib.h>

int main (){
	float soma,resultado,n1,n2;
	printf ("Digite um numero ");
	scanf ("%f",&n1);
	
	printf ("Digite um segundo numero ");
	scanf("%f",n2);
	
	soma=n1+n2;
	
	resultado=soma/2;
	
	printf ("A media eh %.2f	\n\n",resultado);
//	printf ("A media de %f somado com %f =  ")
	
	system("pause");
	return 0;
}