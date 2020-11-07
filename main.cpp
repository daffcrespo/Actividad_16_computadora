#include <iostream>
#include "laboratorio.h"
using namespace std;

int main() {
    Laboratorio lb;
    string op;

    while (true)
    {
        cout << "1) Agregar Computadora" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "5) Insertar" << endl;
        cout << "6) Inicializar" << endl;
        cout << "7) Eliminar" << endl;
        cout << "8) Ordenar" << endl;
        cout << "9) Buscar" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if (op == "1") {
            Computadora c;

            cin >> c;

            lb.agregarComputadora(c); 
            cin.ignore();
        } 
        else if (op == "2") {
            lb.mostrar();
        }
        else if (op == "3") {
            lb.respaldar();
        }
        else if (op == "4") {
            lb.recuperar();
        }
        else if (op == "5") {
            Computadora c;
            cin >> c;

            size_t pos;
            cout << "posición: ";
            cin >> pos; cin.ignore();

            if (pos >= lb.size()) {
                cout << "Posición no válida" << endl;
            }
            else {
                lb.insertar(c, pos);
            }
        }
        else if (op == "6") {
            Computadora c;
            cin >> c;

            size_t n;
            cout << "n: ";
            cin >> n; cin.ignore();

            lb.inicializar(c, n);
        }
        else if (op == "7") {
            size_t pos;
            cout << "posición: ";
            cin >> pos; cin.ignore();

            if (pos >= lb.size()) {
                cout << "Posición no válida" << endl;
            }
            else {
                lb.eliminar(pos);
            }
        }
        else if (op == "8") {
            lb.ordenar();
        }
        else if (op == "9") {
            Computadora c;
            cin >> c; cin.ignore();

            Computadora *ptr = lb.buscar(c);

            if (ptr == nullptr) {
                cout << "no encontrado" << endl;
            }
            else {
                cout << endl << "La computadora encontrada es: " << endl;
                cout << *ptr << endl;
            }
        }
        else if (op == "0") {
            break;
        }
    }
    
    return 0;
}