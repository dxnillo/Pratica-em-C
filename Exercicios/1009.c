#include <stdio.h>

int main (){

	char (nome)[50]; 
    double salario, montante, TOTAL;

    scanf("%s",nome);
    scanf("%lf %lf",&salario,&montante);

	TOTAL = montante * 0.15 + salario;

    printf("TOTAL = R$ %.2lf\n",TOTAL);

	return 0;
}