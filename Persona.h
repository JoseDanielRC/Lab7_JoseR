#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include <string>
using std::string;
using std::cout;
class Persona{
protected:
string nombre;
int edad;
string sexo;
string origen;
string elemento;

public:
Persona();
Persona(string, int, string, string, string);

string getNombre();
void setNombre(string);

int getEdad();
void setEdad(int);

string getSexo();
void setSexo(string);

string getOrigen();
void setOrigen(string);

string getElemento();
void setElemento(string);

virtual string toString();
};
#endif
