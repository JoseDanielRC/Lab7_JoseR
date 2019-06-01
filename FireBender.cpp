#include "FireBender.h"

FireBender::FireBender(){
}
FireBender::FireBender(string cicatrices ,string victorias,string nombre ,int edad ,string sexo ,string origen ,string elementos):Persona(nombre,edad,sexo,origen,elemento){
//cicatrices, victorias, nombre, edad,sexo,origen,elemento
this->cicatrices=cicatrices;
this->victorias=victorias;
}
string FireBender::getCicatrices(){
return cicatrices;
}
void FireBender::setCicatrices(string cicatrices){
this->cicatrices=cicatrices;
}

string FireBender::getVictorias(){
return victorias;
}
void FireBender::setVictorias(string victorias){
this->victorias=victorias;
}
string FireBender::toString(){
cout<<" cicatrices: "<<cicatrices<<" victorias: "<<victorias;
return "Fire Bender" ;
}
