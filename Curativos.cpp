#include "Curativos.h"

Curativos::Curativos(){
}
Curativos::Curativos(string curacion,string nombre ,int nivel):Poder(nombre ,nivel){

this->curacion=curacion;
}
string Curativos::getcuracion(){
return curacion;
}
void Curativos::setcuracion(string curacion){
this->curacion=curacion;
}
string Curativos::toString(){
cout<<curacion;
return "";
}
