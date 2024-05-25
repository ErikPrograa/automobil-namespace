#ifndef UNTITLED_AUTOMOBIL_H
#define UNTITLED_AUTOMOBIL_H
#include <string>
using namespace std;

class automobil {

public:
    // -Contructores-
    //Contrsuctor Implicito:
    automobil() = default;
    //Contructor Explicito por parametros:
    automobil(string modelo, string color, int cilindros, int millaje, string tipo_de_transmision, string tipo_de_combustible, float precio);
    //Contructor Explicito por copia:
    automobil(const automobil &automovil);

    automobil &operator=(const automobil &rhs);

    // -Metodos de acceso-
    string getModelo() const {
        return modelo;
    }
    string getColor() const {
        return color;
    }
    string getTipo_de_transmision() const {
        return tipo_de_transmision;
    }
    string getTipo_de_combustible() const {
        return tipo_de_combustible;
    }
    int getCilindros() const {
        return cilindros;
    }
    int getMillaje() const {
        return millaje;
    }
    float getPrecio() const {
        return precio;
    }

private:
    string modelo;
    string color;
    int cilindros;
    int millaje;
    string tipo_de_transmision;
    string tipo_de_combustible;
    float precio;


}
;

#endif //UNTITLED_AUTOMOBIL_H
