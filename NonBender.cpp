#include "NonBender.h"

NonBender::NonBender(){
}
NonBender::NonBender(string fuerza ,string velocidad,string nombre ,int edad ,string sexo ,string origen ,string elemento):Persona(nombre,edad,sexo,origen,elemento){
// fuerza, velocidad, nombre, edad, sexo, origen, elemento
this->fuerza=fuerza;
this->velocidad=velocidad;
}
string NonBender::getFuerza(){
return fuerza;
}
void NonBender::setFuerza(string fuerza){
this->fuerza=fuerza;
}

string NonBender::getVelocidad(){
return velocidad;
}
void NonBender::setVelocidad(string velocidad){
this->velocidad=velocidad;
}
string NonBender::toString(){
cout<<" fuerza: "<<fuerza<<" velocidad: "<<velocidad;
return "Non Bender";
}
