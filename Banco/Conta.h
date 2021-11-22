#pragma once

#include <string>

class Conta
{
	std::string numero;
	std::string cpfTitular;
	std::string nomeTitular;
	float saldo;

public:
	Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	std::string getNumero() const;
	void setNumero(std::string numero);
	std::string getCpfTitular();
	void setCpfTitular(std::string cpf);
	std::string getNomeTitular() const;
	void setNomeTitular(std::string nome);
	float getSaldo() const;
};