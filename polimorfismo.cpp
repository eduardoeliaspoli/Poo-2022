#include <iostream>
#include "polimorfismo.h"
int main(){
  Funcionario f("Amailson");
  Cliente c("Dilvonei");

  // Criando um ponteiro para a interface Falante
  Falante* p1 = &c;
  Falante* p2 = &f;

  // Chamando o método "falar" polimórficamente
  cout << p1->falar() << endl;
  cout << p2->falar() << endl; 
  return 0;
}