#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "computadora.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Laboratorio{
private:
    vector<Computadora> computadoras;

public:
    Laboratorio();

    void agregarComputadora(const Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();
    void insertar(const Computadora &c, size_t pos);
    size_t size();
    void inicializar(const Computadora &c, size_t n);
    void eliminar(size_t pos);
    void ordenar();
    Computadora* buscar(const Computadora &c);

  


    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
    {
        l.agregarComputadora(c);

        return l;
    }
};

#endif 
