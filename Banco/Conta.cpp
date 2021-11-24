#include <iostream>
#include "Conta.h"

int Conta::numeroDeContas = 0;

// construtor com initialization list
Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular)
			: numero(numero), nomeTitular(nomeTitular), cpfTitular(cpfTitular), saldo(0)
{
	numeroDeContas++;
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

std::string Conta::getCpfTitular() const
{
	return cpfTitular;
}

std::string Conta::getNomeTitular() const
{
	return nomeTitular;
}

float Conta::getSaldo() const
{
	return saldo;
}
