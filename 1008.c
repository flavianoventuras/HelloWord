#include <stdio.h>
int main(){
	int num_funcionario;
	int salario;
	float horas_trabalhadas;
	float salario_corrigido;

	scanf("%d", &num_funcionario);
	scanf("%d", &salario);
	scanf("%f", &horas_trabalhadas);

	salario_corrigido = salario * horas_trabalhadas;

	printf("NUMBER = %d\n", num_funcionario);
	printf("SALARY = U$ %.2f\n", salario_corrigido);

}