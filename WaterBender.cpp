#include "WaterBender.h"

WaterBender::WaterBender(){
}
WaterBender::WaterBender(string tribu ,string arma,string nombre ,int edad ,string sexo ,string origen ,string elemento):Persona(nombre,edad,sexo,origen,elemento){
//tribu, arma, nombre, edad, sexo,origen,elemento
this->tribu=tribu;
this->arma=arma;
}
string WaterBender::getTribu(){
return tribu;
}
void WaterBender::setTribu(string tribu){
this->tribu=tribu;
}

string WaterBender::getArma(){
return arma;
}
void WaterBender::setArma(string arma){
this->arma=arma;
}
string WaterBender::toString(){
cout<<" tribu: "<<tribu<<" arma: "<<arma;
return "Water Bender";
}
