#include <iostream>

using namespace std;


class Carro{
    public:
        int vel = 0;
        int velMax;
        string tipo;
        
        void ini(int tp);
     
    private:
};
    void Carro::ini(int tp){//1 = Corrida, 2 = CarroPopular, 3 = CarrodeGolf;
    if (tp == 1) {
        this->velMax = 350;
        this->tipo ="Corrida";
    }else if (tp == 2){
        this->velMax = 210;
        this->tipo = "CarroPopular";
    }else if (tp == 3){
        this->velMax = 31;
        this->tipo="CarrodeGolf";
        count(0,350,)
    }

}

int main(){
    Carro *car1 = new Carro();
    Carro *car2 = new Carro();
    Carro *car3 = new Carro();

    car1->ini(1);
    car2->ini(2);
    car3->ini(3);


    cout << car1->velMax;
    cout << car2->velMax;
    cout << car3->velMax;

    return 0;
}