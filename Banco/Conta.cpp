#include <iostream>
#include "Conta.h"

int Conta::numeroDeContas = 0;

// construtor com initialization list
Conta::Conta(std::string numero, Titular titular)
			: numero(numero), titular(titular), saldo(0)
{
	numeroDeContas++;
}

Conta::~Conta()
{
	numeroDeContas--;
}

int Conta::getNumeroDeContas()
{
	return numeroDeContas;
}

void Conta::sacar(float valorASacar)
{

	if (valorASacar < 0) {
		std::cout << "Não pode sacar valor negativo!" << std::endl;
		return;
	}

	if (valorASacar > saldo) {
		std::cout << "Saldo insuficiente!" << std::endl;
		return;
	}

	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
	if (valorADepositar < 0) {
		std::cout << "Não pode depositar valor negativo!" << std::endl;
		return;
	}

	saldo += valorADepositar;
}

std::string Conta::getNumero() const
{
	return numero;
}

float Conta::getSaldo() const
{
	return saldo;
}
