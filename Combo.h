#ifndef Combo_h
#define Combo_h
#include <iostream>
#include <string>
#include "Producto.h"
using namespace std;

class Combo : public Producto {
private:
    int clave;
public:
    //constructores
    Combo();
    Combo(string _nombre, int _precio, int _peso, int _clave);
    //otros metodos
    string str();
    int calculaTotalPagar();
};


#endif