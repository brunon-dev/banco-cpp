#include "Titular.h"
#include <iostream>

Titular::Titular(std::string nome, std::string cpf):nome(nome), cpf(cpf)
{
	verificaTamanhoDoNome();
}

std::string Titular::getCpf() const
{
	return cpf;
}

std::string Titular::getNome() const
{
	return nome;
}

void Titular::verificaTamanhoDoNome()
{
	if (nome.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}
