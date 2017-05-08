#include "Empleado.h"

Empleado::Empleado(string cc, string nom, double sal){
    cedula = cc;
    nombre = nom;
    salario = sal;
}

Empleado::~Empleado(){
}

string Empleado::getCedula(){
    return cedula;
}

string Empleado::getNombre(){
    return nombre;
}

double Empleado::getSalario(){
    return salario;
}

void Empleado::setCedula(string cc){
    cedula = cc;
}

void Empleado::setNombre(string nom){
    nombre = nom;
}

void Empleado::setSalario(double sal){
    salario = sal;
}
