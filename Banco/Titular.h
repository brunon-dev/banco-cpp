#pragma once
#include <string>

class Titular
{
private:
	std::string nome;
	std::string cpf;

public:
	Titular(std::string nome, std::string cpf);
	std::string getCpf() const;
	std::string getNome() const;

private:
	void verificaTamanhoDoNome();
};