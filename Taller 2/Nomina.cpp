#include "Nomina.h"

Nomina::Nomina(vector<Empleado> empleados){
    datosEmpresa = empleados;
}

Nomina::~Nomina(){
}

vector<Empleado> Nomina::getDatosEmpresa(){
    return datosEmpresa;
}

void Nomina::setDatosEmpresa(vector<Empleado> emp){
    datosEmpresa = emp;
}

void Nomina::agregarInformacion(Empleado emp){
    datosEmpresa.push_back(emp);
    for(int i=0; i<datosEmpresa.size(); i++){
        cout << datosEmpresa[i].getNombre() << endl;
    }
}

double Nomina::totalNomina(){
    double totalSalarios=0;
    for(int i=0; i<datosEmpresa.size(); i++){
        totalSalarios += datosEmpresa[i].getSalario();
    }
    return totalSalarios;
}

double Nomina::promedioNomina(){
    double totalSalario=0;
    for(int i=0; i<datosEmpresa.size(); i++){
        totalSalario += datosEmpresa[i].getSalario();
    }
    totalSalario /= datosEmpresa.size();
    return totalSalario;
}
