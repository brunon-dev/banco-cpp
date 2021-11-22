#include <iostream>
#include "Conta.h"

// construtor com initialization list
Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular)
			: numero(numero), nomeTitular(nomeTitular), cpfTitular(cpfTitular), saldo(0)
{
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

void Conta::setNumero(std::string numero)
{
	this->numero = numero;
}

std::string Conta::getCpfTitular()
{
	return cpfTitular;
}

void Conta::setCpfTitular(std::string cpf)
{
	cpfTitular = cpf;
}

std::string Conta::getNomeTitular() const
{
	return nomeTitular;
}

void Conta::setNomeTitular(std::string nome)
{
	nomeTitular = nome;
}

float Conta::getSaldo() const
{
	return saldo;
}
