#include "Combo.h"
#include <cmath>

//constructores
Combo::Combo() : Producto(){
    clave = 0;
}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave) :
Producto(_nombre, _precio, _peso) {
    clave = _clave;
}
//otros metodos
string Combo::str(){
    int precioFinal = calculaTotalPagar();
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(precioFinal) +
    "-" + to_string(clave);
}
int Combo::calculaTotalPagar(){
    int precioSinClave = precio * peso * clave;
    if (clave == 1) {
        int descuento = (precioSinClave / 100) * 25;
        return precioSinClave - descuento;
    } 
    else if (clave == 2) {
        int descuento = (precioSinClave / 100) * 30;
        return precioSinClave - descuento;
    }
    else {
        return precioSinClave;
    }
}