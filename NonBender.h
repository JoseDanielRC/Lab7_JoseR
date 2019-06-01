#include "Persona.h"
#ifndef NONBENDER_H
#define NONBENDER_H
#include <string>
using std::string;
class NonBender:public Persona{
private:
string fuerza;
string velocidad;

public:
NonBender();
NonBender(string, string,string, int, string, string, string);

string getFuerza();
void setFuerza(string);

string getVelocidad();
void setVelocidad(string);

virtual string toString();
};
#endif
