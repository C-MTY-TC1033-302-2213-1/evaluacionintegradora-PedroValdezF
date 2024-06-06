#ifndef Producto_h
#define Producto_h
#include "Producto.h"
#include <iostream>
#include <string>
using namespace std;

class Producto {
protected:
    string nombre;
    int precio;
    int peso;
public:
    //constructores
    Producto();
    Producto(string _nombre, int _precio, int _peso);
    //setters
    void setNombre(string _nombre);
    void setPrecio(int _precio);
    void setPeso(int _peso);
    //getters
    string getNombre();
    int getPrecio();
    int getPeso();
    //otros metodos
    virtual string str();
    virtual int calculaTotalPagar();
};


#endif