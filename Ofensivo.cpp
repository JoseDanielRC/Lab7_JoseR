#include "Ofensivo.h"

Ofensivo::Ofensivo(){
}
Ofensivo::Ofensivo(string rango ,string fuerza,string nombre ,int nivel):Poder(nombre ,nivel){

this->rango=rango;
this->fuerza=fuerza;
}
string Ofensivo::getrango(){
return rango;
}
void Ofensivo::setrango(string rango){
this->rango=rango;
}

string Ofensivo::getfuerza(){
return fuerza;
}
void Ofensivo::setfuerza(string fuerza){
this->fuerza=fuerza;
}
string Ofensivo::toString(){
cout<<"rango: "<<rango<<"fuerza: "<<fuerza;
return "";
}
