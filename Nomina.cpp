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
}

void Nomina::totalNomina(){
    double totalSalarios;
    for(int i=0; i<datosEmpresa.size(); i++){
        totalSalarios += datosEmpresa[i].getSalario();
    }
    cout << totalSalarios << endl;
}

void Nomina::promedioNomina(){
    double totalSalarios;
    for(int i=0; i<datosEmpresa.size(); i++){
        totalSalarios = datosEmpresa[i].getSalario();
    }
    totalSalarios/datosEmpresa.size();
    cout << totalSalarios << endl;
}
