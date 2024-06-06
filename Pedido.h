#ifndef Pedido_h
#define Pedido_h
#include <stdio.h>
#include <sstream>
#include <fstream>
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"

class Pedido {
private:
    static const int MAX_PROD = 50;
    Producto *arrPtrProductos[MAX_PROD];
    int cantidad;
public:
    //constructores
    Pedido();
    void leerArchivo(string nombre);
    void ticketCliente();
};

#endif