#include "Poder.h"
#include <string>
#include<iostream>
using std::string;
Poder::Poder(){
}
Poder::Poder(string nombre ,int nivel){

this->nombre=nombre;
this->nivel=nivel;
}
string Poder::getnombre(){
return nombre;
}
void Poder::setnombre(string nombre){
this->nombre=nombre;
}

int Poder::getnivel(){
return nivel;
}
void Poder::setnivel(int nivel){
this->nivel=nivel;
}
string Poder::toString(){
cout<<"nombre: "<<nombre<<" nivel: "<<nivel;
return "";
}
