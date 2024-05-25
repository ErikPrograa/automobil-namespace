#include "automobil.h"

    //Constructor por parametros
automobil::automobil(string modelo, string color, int cilindros, int millaje,
                     string tipo_de_transmision, string tipo_de_combustible, float precio) {
    this->modelo = modelo;
    this->color = color;
    this->cilindros = cilindros;
    this->millaje = millaje;
    this->tipo_de_transmision = tipo_de_transmision;
    this->tipo_de_combustible = tipo_de_combustible;
    this->precio = precio;
   }
    //Constructor por Copia
    automobil::automobil(const automobil &automovil) {
        this->modelo = automovil.modelo;
        this->color = automovil.color;
        this->cilindros = automovil.cilindros;
        this->millaje = automovil.millaje;
        this->tipo_de_transmision =automovil.tipo_de_transmision;
        this->tipo_de_combustible = automovil.tipo_de_combustible;
        this->precio = automovil.precio;
    }

    automobil &automobil::operator=(const automobil &rhs)
{
    if (this != &rhs)
{
       this -> modelo = rhs.modelo;
       this -> color = rhs.color;
       this -> cilindros = rhs.cilindros;
       this -> millaje= rhs.millaje;
       this -> tipo_de_transmision = rhs.tipo_de_transmision;
       this -> tipo_de_combustible = rhs.tipo_de_combustible;
       this -> precio = rhs.precio;
}
    return *this;
}