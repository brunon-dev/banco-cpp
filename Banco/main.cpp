#include <iostream>
#include <string>
#include "Conta.h"

using namespace std;

int main()
{
	Conta umaConta;

	umaConta.numero = "123456";
	umaConta.cpfTitular = "123.456.789.01";
	umaConta.nomeTitular = "Bruno";
	umaConta.saldo = 1000;

	Conta umaOutraConta;
	umaOutraConta.numero = "789012";
	umaOutraConta.saldo = 1000;
	umaOutraConta.sacar(400);
	umaOutraConta.depositar(100);

	cout << "Saldo de uma conta: " << umaConta.saldo << " | saldo de outra conta: " << umaOutraConta.saldo << endl;

	return 0;
}