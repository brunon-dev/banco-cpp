#include <iostream>
#include <iomanip>
#include <string>
#include "Conta.h"

using namespace std;

void exibeSaldo(const Conta& conta)
{
	cout << "Saldo da conta " << conta.getNumero() << " do titular " << conta.getNomeTitular() << ": " << conta.getSaldo() << endl;
}

int main()
{
	Conta umaConta("12345", "Bruno", "123.456.789-01");
	umaConta.depositar(1000);

	Conta umaOutraConta("67890", "Pedro", "234.567.890-12");
	umaOutraConta.depositar(1000);
	umaOutraConta.sacar(400);
	
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	exibeSaldo(umaConta);
	exibeSaldo(umaOutraConta);

	return 0;
}