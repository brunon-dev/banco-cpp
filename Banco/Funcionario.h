#pragma once
#include "Pessoa.h"
#include <string>

class Funcionario: public Pessoa
{
private:
	float salario;
public:
	Funcionario(std::string nome, Cpf cpf, float salario);
};