#include <iostream>
#include <string>

using namespace std;

// Conceitos presentes no código: Herança - interfaces, Herança - funções virtuais puras, Polimorfismo,
// Dados membros de classe, Funções membros de classe, Herança - funções virtuais, encapsulamento;

// Criando uma interface chamada Falante
class Falante {
 public:
  // Método puramente virtual para falar
  virtual string falar() const = 0;
};

// Classe concreta que implementa a interface Falante
class Pessoa : public Falante {
 public:
  Pessoa(string nome) : nome_(nome) {}

  string nome() const { return nome_; }

  // Implementação do método "falar" da interface Falante 
  string falar() const override {
    return "Olá, meu nome é " + nome_;
  }

 private:
  string nome_;
};

// Outra classe concreta que implementa a interface Falante
class Funcionario : public Pessoa {
 public:
  Funcionario(string nome) : Pessoa(nome) {}

  // Implementação do método "falar" da interface Falante
  string falar() const override {
    return "Olá, prazer, meu nome é " + nome() + " como posso ajudar?";
  }
};

// Outra classe concreta que implementa a interface Falante
class Cliente : public Pessoa {
 public:
  Cliente(string nome) : Pessoa(nome) {}

  // Implementação do método "falar" da interface Falante
  string falar() const override {
    return "Olá, me chamo " + nome() + " pode me ajudar?";
  }
};

 
