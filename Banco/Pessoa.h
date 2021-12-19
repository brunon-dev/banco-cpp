#pragma once
#include "Cpf.h"
#include <string>

class Pessoa
{

protected:
	std::string nome;
	Cpf cpf;

public:
	Pessoa(std::string nome, Cpf cpf);

private:
	void verificaTamanhoDoNome();
};