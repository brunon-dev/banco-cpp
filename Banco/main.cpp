#include <iostream>
#include <iomanip>
#include <string>
#include "Conta.h"

using namespace std;

void exibeSaldo(const Conta& conta)
{
	cout << "Saldo da conta " << conta.getNumero() << ": " << conta.getSaldo() << endl;
}

int main()
{
	Conta umaConta;
	umaConta.setNumero("12345");
	umaConta.depositar(1000);

	Conta umaOutraConta;
	umaOutraConta.setNumero("67890");
	umaOutraConta.depositar(1000);
	umaOutraConta.sacar(400);
	
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	exibeSaldo(umaConta);
	exibeSaldo(umaOutraConta);

	return 0;
}