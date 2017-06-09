#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
using namespace std;

class Empleado{
    private:
        string cedula;
        string nombre;
        double salario;
    public:
        Empleado(string cc, string nom, double sal);
        ~Empleado();
        string getCedula();
        string getNombre();
        double getSalario();

        void setCedula(string cc);
        void setNombre(string nom);
        void setSalario(double sal);
};

#endif // EMPLEADO_H
