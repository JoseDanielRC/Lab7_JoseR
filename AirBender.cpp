#include "AirBender.h"

AirBender::AirBender(){
}
AirBender::AirBender(string pelo ,string colorflecha,string nombre ,int edad ,string sexo ,string origen ,string elemento):Persona(nombre,edad,sexo,origen,elemento){

this->pelo=pelo;
this->colorflecha=colorflecha;
}
string AirBender::getPelo(){
return pelo;
}
void AirBender::setPelo(string pelo){
this->pelo=pelo;
}

string AirBender::getColorflecha(){
return colorflecha;
}
void AirBender::setColorflecha(string colorflecha){
this->colorflecha=colorflecha;
}
string AirBender::toString(){
cout<<" cantidad pelo: "<<pelo<<" color flecha: "<<colorflecha;
return "Air Bender";
}
