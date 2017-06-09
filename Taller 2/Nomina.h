#ifndef NOMINA_H
#define NOMINA_H

#include "Empleado.h"
#include <vector>
#include <iostream>

using namespace std;

class Nomina{
    private:
        vector<Empleado> datosEmpresa;
    public:
        Nomina(vector<Empleado> empleados);
        virtual ~Nomina();

        vector<Empleado> getDatosEmpresa();
        void setDatosEmpresa(vector<Empleado> emp);
        void agregarInformacion(Empleado emp);
        double totalNomina();
        double promedioNomina();
};

#endif // NOMINA_H
