#include <string>
#include <iostream>
#include <vector>

struct Pessoa {
    int id;
    std::string nome;
    int idade;
};

class Dados {
private:
    std::vector<Pessoa> pessoas;
    int proximoId;

public:
    Dados() : proximoId(1) {}

    void adicionarPessoa(const std::string& nome, int idade) {
        pessoas.push_back({proximoId++, nome, idade});
    }

    void mostrarPessoas() {
        for (const auto& pessoa : pessoas) {
            std::cout << "ID: " << pessoa.id << ", Nome: " << pessoa.nome << ", Idade: " << pessoa.idade << std::endl;
        }
    }

    // Implementar métodos para atualizar, excluir, buscar pessoas, etc., conforme necessário
};
