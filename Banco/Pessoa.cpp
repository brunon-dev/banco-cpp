#include "Pessoa.h"
#include <iostream>

Pessoa::Pessoa(std::string nome, Cpf cpf):nome(nome),cpf(cpf)
{
	verificaTamanhoDoNome();
}

std::string Pessoa::getNome() const
{
	return nome;
}

void Pessoa::verificaTamanhoDoNome()
{
	if (nome.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}