#pragma once
#include "Cpf.h"
#include <string>

class Pessoa
{

private:
	std::string nome;
	Cpf cpf;
public:
	Pessoa(std::string nome, Cpf cpf);
	std::string getNome() const;

private:
	void verificaTamanhoDoNome();
};