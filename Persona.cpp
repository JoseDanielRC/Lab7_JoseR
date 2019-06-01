#include "Persona.h"
#include<iostream>
#include <string>
using std::string;
Persona::Persona(){
}
Persona::Persona(string nombre ,int edad ,string sexo ,string origen ,string elemento){

this->nombre=nombre;
this->edad=edad;
this->sexo=sexo;
this->origen=origen;
this->elemento=elemento;
}
string Persona::getNombre(){
return nombre;
}
void Persona::setNombre(string nombre){
this->nombre=nombre;
}

int Persona::getEdad(){
return edad;
}
void Persona::setEdad(int edad){
this->edad=edad;
}

string Persona::getSexo(){
return sexo;
}
void Persona::setSexo(string sexo){
this->sexo=sexo;
}

string Persona::getOrigen(){
return origen;
}
void Persona::setOrigen(string origen){
this->origen=origen;
}

string Persona::getElemento(){
return elemento;
}
void Persona::setElemento(string elemento){
this->elemento=elemento;
}
string Persona::toString(){

return "";
}
