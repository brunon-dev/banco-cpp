#include <iostream>
#include "Conta.h"

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

std::string Conta::getNumero()
{
	return numero;
}

void Conta::setNumero(std::string num)
{
	numero = num;
}

std::string Conta::getCpfTitular()
{
	return cpfTitular;
}

void Conta::setCpfTitular(std::string cpf)
{
	cpfTitular = cpf;
}

std::string Conta::getNomeTItular()
{
	return nomeTitular;
}

void Conta::setNomeTitular(std::string nome)
{
	nomeTitular = nome;
}

float Conta::getSaldo()
{
	return saldo;
}
