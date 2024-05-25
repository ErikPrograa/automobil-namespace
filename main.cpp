#include <iostream>
#include <string>
#include "automobil.h"
#include "Garage.h"

int main() {
    Garage garage;
   automobil carro{};
   automobil carro1("Bocho","Amarillo",4,60000,"Manual","Gasolina",5000.5);
   automobil carro2(carro1);

    carro=carro1;

   std::cout<<"Modelo: " <<carro.getModelo()<<"\n";
   std::cout<<"Color: " <<carro.getColor()<<"\n";
   std::cout<<"Cilindros: " <<carro.getCilindros()<<"\n";
   std::cout<<"Millaje: " <<carro.getMillaje()<<"\n";
   std::cout<<"Tipo de transmision: " <<carro.getTipo_de_transmision()<<"\n";
   std::cout<<"Tipo de combustible: " <<carro.getTipo_de_combustible()<<"\n";
   std::cout<<"Precio: " <<carro.getPrecio()<<" $ \n";

   garage.addCarro(carro1);
   garage.addCarro(carro2);
   std::cout<<"Carros en el garage: " <<garage.getNumberOfCarros() << "\n";

   return 0;



}