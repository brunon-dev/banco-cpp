#include <iostream>
#include <iomanip>
#include <string>
#include "Conta.h"
#include "Funcionario.h"

using namespace std;

void exibeSaldo(const Conta& conta)
{
	// " do titular " << conta.getNomeTitular() <<
	cout << "Saldo da conta " << conta.getNumero() <<  ": " << conta.getSaldo() << endl;
}

int main()
{
	Conta umaConta("12345", Titular("Bruno", Cpf("123.456.789-01")));
	umaConta.depositar(1000);

	// cria o objeto CPF com conversão implícita
	Conta umaOutraConta("67890", Titular("Pedro", string("234.567.890-12")));
	umaOutraConta.depositar(1000);
	umaOutraConta.sacar(400);
	
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	exibeSaldo(umaConta);
	exibeSaldo(umaOutraConta);

	cout << "Total de contas: " << Conta::getNumeroDeContas() << endl;

	Funcionario funcionario("Sonia", Cpf("345.678.901-23"), 1000);
	cout << "Nome do funcionário: " << funcionario.getNome() << endl;

	return 0;
}