#pragma once

#include <string>

class Conta
{
	std::string numero;
	std::string cpfTitular;
	std::string nomeTitular;
	float saldo = 0;

public:
	void sacar(float valorASacar);
	void depositar(float valorADepositar);

	std::string getNumero();
	void setNumero(std::string num);
	std::string getCpfTitular();
	void setCpfTitular(std::string cpf);
	std::string getNomeTItular();
	void setNomeTitular(std::string nome);
	float getSaldo();
};