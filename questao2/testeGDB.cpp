#include <iostream>

int funcX (int a, int b)
{
	++a;
	b++;
	int result = a + b;

	return result;
} //arg1 e arg2 apos a execução de funcX são 11 e 23 respectivamente.
// as variaveis criadas dentro da funcão funcX são locais e não alteram os valores de arg1 e arg2.

int funcY (int* a, int b)
{
	int* y = new int;
	(*y) = (*a);
	(*y) *= 5;
	int result = (*y) + b;

	return result;
} //os valores de arg1 e arg2 não se alteram, 11 e 23 respectivamente.
// apesar da passagem por referencia de arg1 dentro da função não é atribuido nenhum valor a mesma.

void funcZ (int a, int b, int* result)
{
	a++;
	(*result) += a + 2*b;
} // arg1 e arg2 por todo o codigo não terá alteração em seus valores.
// igualmente as outras funções temos variaveis sendo alteradas, resultado por exemplo, é alterada pois
// foi passada por referencia, porem arg1 e arg2 tem seus valores inalterados, arg1 = 11 e arg2 = 23
// por todo o codigo.

int main(int argc, char* argv[])
{
	int arg1 = 11;
	int arg2 = 23;
	funcX ( arg1, arg2);
	funcY ( &arg1, arg2);
	int resultado = 0;
	funcZ (arg1,arg2,&resultado);
	
	return 0;
}