#include <iostream>
#include <vector>
#include <fstream>
#include "Empleado.h"
#include "Nomina.h"

using namespace std;

int main(){
    vector<Empleado> informacionEmpresa;
    Empleado empleado1("111", "Alexander", 500);
    Empleado empleado2("112", "Andres", 500);
    Empleado empleado3("113", "Nicolas", 500);

    informacionEmpresa.push_back(empleado1);
    informacionEmpresa.push_back(empleado2);
    informacionEmpresa.push_back(empleado3);

    Nomina empleadosEmpresa(informacionEmpresa);

    empleadosEmpresa.totalNomina();
    empleadosEmpresa.promedioNomina();

    Empleado empleado4("114", "Manco", 300);
    empleadosEmpresa.agregarInformacion(empleado4);


    cout<<"........//Menu//........"<< endl;
    string nombreArchivo1;
    string nombreArchivo2;
    int eleccion = 0;

		cout<<endl;
		cout<<"*******************************"<<endl;
		cout<<"*  BIENVENIDO A UVNOMINA      *"<<endl;
		cout<<"*******************************"<<endl;
		cout<<"*1.Informe por total.         *"<<endl;
		cout<<"*2.Informe por promedio.      *"<<endl;
		cout<<"*3.Atras.                     *"<<endl;
		cout<<"*******************************"<<endl;
		cout<<endl;
		cout<<"Ingrese su eleccion:"<<endl;
		cin>>eleccion;

        if(eleccion == 1){/*
            cout<<"Ingrese el nombre del archivo"<<endl;
			cin>>nombreArchivo1;*/

			ofstream opcion1("TotalNomina.txt");
			opcion1<<"*******************************"<<endl;
			opcion1<<"*  BIENVENIDO A UVNOMINA      *"<<endl;
			opcion1<<"*******************************"<<endl;
			opcion1<<"*Total salario: "<< empleadosEmpresa.totalNomina() <<"      *"<<endl;
			opcion1<<"*******************************"<<endl;
			opcion1.close();

			cout<<endl;
			cout<<"*******************************"<<endl;
			cout<<"*  BIENVENIDO A UVNOMINA      *"<<endl;
			cout<<"*******************************"<<endl;
			cout<<"*Total salario:"<<empleadosEmpresa.totalNomina()<<"          *"<<endl;
			cout<<"*******************************"<<endl;
			cout<<endl;

            cout<<endl;
            cout<<"***************************************"<<endl;
			cout<<"*  El archivo se guardo exitosamente  *"<<endl;
			cout<<"***************************************"<<endl;
			cout<<endl;
        }

        else if(eleccion == 2){/*
			cout<<"Ingrese el nombre del archivo:"<<endl;
			cin>>nombreArchivo2;*/

            ofstream opcion2("PromedioNomina.txt");

            opcion2<<endl;
			opcion2<<"*******************************"<<endl;
			opcion2<<"*  BIENVENIDO A UVNOMINA      *"<<endl;
			opcion2<<"*******************************"<<endl;
			opcion2<<"*Total promedio:"<<empleadosEmpresa.promedioNomina()<<"           *"<<endl;
			opcion2<<"*******************************"<<endl;
			opcion2<<endl;
			opcion2.close();

			cout<<endl;
			cout<<"*******************************"<<endl;
			cout<<"*  BIENVENIDO A UVNOMINA      *"<<endl;
			cout<<"*******************************"<<endl;
			cout<<"*Total promedio:"<<empleadosEmpresa.promedioNomina()<<"           *"<<endl;
			cout<<"*******************************"<<endl;
			cout<<endl;

			cout<<endl;
			cout<<"***************************************"<<endl;
			cout<<"*  El archivo se guardo exitosamente  *"<<endl;
			cout<<"***************************************"<<endl;
			cout<<endl;

		}
}
