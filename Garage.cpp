#include "Garage.h"
#include <stdexcept>
Garage::Garage() = default;

void Garage::addCarro(const automobil& carro) {
    carros.push_back(carro);
}

automobil Garage::getCarro(int index){
    if(index <carros.size()){
        return carros[index];
    }
    else {
        throw out_of_range("Index out of range");
    }
}
int Garage::getNumberOfCarros() {
    return carros.size();
}
