#include "EarthBender.h"

EarthBender::EarthBender(){
}
EarthBender::EarthBender(int coles ,int graduacion,string nombre ,int edad ,string sexo ,string origen ,string elemento):Persona(nombre,edad,sexo,origen,elemento){
//coles, graduacion, nombre, edad, sexo,origen,elemento
this->coles=coles;
this->graduacion=graduacion;
}
int EarthBender::getColes(){
return coles;
}
void EarthBender::setColes(int coles){
this->coles=coles;
}

int EarthBender::getGraduacion(){
return graduacion;
}
void EarthBender::setGraduacion(int graduacion){
this->graduacion=graduacion;
}
string EarthBender::toString(){
cout<<" coles: "<<coles<<" graduacion: "<<graduacion;
return "Earth Bender";
}
