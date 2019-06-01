#include <iostream>
#include <string>
#include "Persona.h"
#include "AirBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "NonBender.h"
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
int main()
{
    char resp = 's';
    int opcion = 0, opcion2 = 0 ,coles=0,graduacion=0,posicion=0;
    string  victorias, origen, nombre, sexo, cant_pelo, color_flechas, tribu, arma, trabajo, fuerza, velocidad,elemento,cicatrices;
    int edad = 0;
    vector <Persona*> personas;
    while (resp == 's' || resp == 'S')
    {
        cout << "1. Agregar: \n"
                "2. Listar: \n"
                "3. Eliminar: \n"
                "Ingrese opcion: ";
        cin >> opcion2;
        switch (opcion2)
        {
        case 1:
            cout << "Ingrese nombre: ";
            cin >> nombre;
            cout << "Ingrese nacion de origen: ";
            cin >> origen;
            cout << "Ingrese la edad";
            cin >> edad;
            cout << "Ingrese sexo: ";
            cin >> sexo;
            cout << "1. Air Bender: \n"
                    "2. Fire Bender: \n"
                    "3. Water Bender: \n"
                    "4. Earth Bender: \n"
                    "5. Non Bender: \n"
                    "Ingrese una opcion: ";
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                cout << "Ingrese cantidad de pelo: ";
                cin >> cant_pelo;
                cout << "Ingrese color de flechas: ";
                cin >> color_flechas;
                personas.push_back(new AirBender(cant_pelo, color_flechas, nombre, edad, origen, sexo,elemento));
                break;
            case 2:
                cout << "Ingrese el número de cicatrices: ";
                cin >> cicatrices;
                cout << "Ingrese la cantidad de victorias: ";
                cin >> victorias;
                personas.push_back(new FireBender(cicatrices, victorias, nombre, edad, sexo, origen, elemento));
                break;
            case 3:
                cout << "Ingrese tribu de origen: ";
                cin >> tribu;
                cout << "Ingrese arma de preferencia: ";
                cin >> arma;
                personas.push_back(new WaterBender(tribu, arma, nombre, edad, sexo,origen,elemento));
                break;
            case 4:
                cout << "Ingrese cuantas Coles ha cosechado: ";
                cin >> coles;
                cout << "Ingrese su graduacion (no mayor a 20)";
                cin >> graduacion;
                personas.push_back(new EarthBender(coles, graduacion, nombre, edad, sexo,origen,elemento));
                break;
            case 5:
                cout << "Ingrese trabajo en que labora: ";
                cin >> trabajo;
                cout << "Ingrese fuerza: ";
                cin >> fuerza;
                cout << "Ingrese velocidad: ";
                cin >> velocidad; 
                personas.push_back(new NonBender(fuerza, velocidad, nombre, edad, sexo, origen, elemento));
                break;
            }
            break;
        case 2:
            for (int i = 0; i < personas.size(); i++)
            {
               cout<<i<<"--"<<personas[i]->toString()<<endl;
            }
            
            break;
        case 3:
            cout<<"Ingrese numero de persona a eliminar"<<endl;
            cin>>posicion;
            personas.erase(personas.begin()+posicion);
            break;
        }
    }
}