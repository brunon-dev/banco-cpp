#pragma once
#include <string>
#include "Cpf.h"

class Titular
{
private:
	std::string nome;
	Cpf cpf;

public:
	Titular(std::string nome, Cpf cpf);
	std::string getNome() const;

private:
	void verificaTamanhoDoNome();
};