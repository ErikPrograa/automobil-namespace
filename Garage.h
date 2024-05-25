#ifndef UNTITLED_GARAGE_H
#define UNTITLED_GARAGE_H
#include <vector>
#include "Automobil.h"

class Garage {
public:
    Garage();
    void addCarro(const automobil& carro);
    automobil getCarro(int index);
    int getNumberOfCarros();

private:
    vector<automobil> carros;
};


#endif //UNTITLED_GARAGE_H
