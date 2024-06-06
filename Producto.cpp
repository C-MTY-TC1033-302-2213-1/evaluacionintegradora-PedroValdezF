#include "Producto.h"

//constructores
Producto::Producto(){
    nombre = "Pedro";
    precio = 838331;
    peso = 18;
}
Producto::Producto(string _nombre, int _precio, int _peso){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
}

//setters
void Producto::setNombre(string _nombre){
    nombre = _nombre;
}

void Producto::setPrecio(int _precio){
    precio = _precio;
}

void Producto::setPeso(int _peso){
    peso = _peso;
}

//getters
string Producto::getNombre(){
    return nombre;
}

int Producto::getPrecio(){
    return precio;
}

int Producto::getPeso(){
    return peso;
}

//otros metodos
string Producto::str(){
    int precioFinal = calculaTotalPagar();
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(precioFinal);
}

int Producto::calculaTotalPagar(){
    return precio * peso;
}