#include <iostream>
#include <string>

using namespace std;

struct Conta
{
	string numero;
	string cpfTitular;
	string nomeTitular;
	float saldo;
};

void sacar(Conta& conta, float valorASacar)
{
	if (valorASacar < 0) {
		cout << "Não pode sacar valor negativo!" << endl;
		return;
	}

	if (valorASacar > conta.saldo) {
		cout << "Saldo insuficiente!" << endl;
		return;
	}

	conta.saldo -= valorASacar;
}

void depositar(Conta& conta, float valorADepositar)
{
	if (valorADepositar < 0) {
		cout << "Não pode depositar valor negativo!" << endl;
		return;
	}

	conta.saldo += valorADepositar;
}

int main()
{
	Conta umaConta;

	umaConta.numero = "123456";
	umaConta.cpfTitular = "123.456.789.01";
	umaConta.nomeTitular = "Bruno";
	umaConta.saldo = 100;

	return 0;
}