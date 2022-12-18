#include <iostream>
using namespace std; 


// Classe do tipo enumerate onde as variáveis são numeros inteiros;
enum numeros{x = 4, y = 5, z = 6};

// Fazendo a média dos inteiros da classe numeros, não é preciso inicializar a classe numeros;
double media(){

    double media = (x + y + z) / 3.0;
    return media; 

}


int main(){

    // Chamando a função media;
    double med = media();

    cout <<"A media dessa lista enumerate é: "<< med << endl;

    return 0;
};