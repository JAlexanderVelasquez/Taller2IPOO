#ifndef NOMINA_H
#define NOMINA_H

#include "Empleado.h"
#include <vector>

class Nomina{
    private:
        vector<Empleado> datosEmpresa;
    public:
        Nomina();
        virtual ~Nomina();

        Empleado getDatosEmpresa();
        void setDatosEmpresa(Empleado emp);
        void agregarInformacion(Empleado * emp)
        double totalNomina();
        double promedioNomina();
};

#endif // NOMINA_H
