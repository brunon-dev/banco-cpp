#include <iostream>
#include <iomanip>
#include <string>
#include "Conta.h"

using namespace std;

int main()
{
	Conta umaConta;

	umaConta.depositar(1000);

	Conta umaOutraConta;
	umaOutraConta.depositar(1000);
	umaOutraConta.sacar(400);
	
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	cout << "Saldo de uma conta: " << umaConta.getSaldo() << " | saldo de outra conta: " << umaOutraConta.getSaldo() << endl;

	return 0;
}